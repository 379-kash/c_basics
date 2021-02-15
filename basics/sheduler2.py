#!/usr/bin/env python3

'''
This python file runs a ROS-node 'data_processing' which takes care of the next destination to be reached
This node publishes and subsribes the following topics:
        PUBLICATIONS            SUBSCRIPTIONS
        /checkpoint             /marker_data

'''

import rospy
import math
import csv
import numpy
import os
from sensor_msgs.msg import NavSatFix


class Data_processing():

    def __init__(self):
        rospy.init_node('data_processing')
        #*******************************************opt********************************#
        self.drone_coordinates=[18.999888790581846,72.00021844032396,16.757980880738472]
        self.box_type=None
        self.cnt=0
        self.d_list=None
        self.destination_list=[]
        self.coordinates=[]
        #*******************************************opt********************************#
        self.delivery_grid = [18.9998102845, 72.000142461]
        self.return_grid = [18.9999367615, 72.000142461]
        self.diff_grid = [0.000013552, 0.000014245]

        self.sample_time = 1

        self.checkpoint = NavSatFix()

        # Publishing
        self.pub_checkpoint = rospy.Publisher('/box_checkpoint', NavSatFix, queue_size=1)
    def lat_to_x_diff(self,ip_lat_diff):return (110692.0702932625*ip_lat_diff)
    def long_to_y_diff(self,ip_long_diff):return (-105292.0089353767*ip_long_diff)
    # float(buff_coordinate[0]))

    def read_data(self):
        if(self.cnt==0):
            check_list=[]
            cnt=0
            with open(os.path.join(os.path.dirname(os.path.realpath(__file__)), 'manifest.csv'), 'r') as x:
                content = numpy.array(list(csv.reader(x)))
                self.box_type = content[:, 0]
                self.d_list = content[:, 1:]
            # print(self.sd_list)
            for i in range(len(self.box_type)):
                check_list.append(True)
            maxx=1000
            a=self.d_list[0][1].split(';')
            x,y=float(a[0]),float(a[1])
            for j in range(int(len(self.box_type)/2)):
                k=0
                maxx=1000
                index=0
                for k in range(len(self.box_type)):
                    if(check_list[k] and self.box_type[k]=="DELIVERY"):
                        buff_coordinate=self.d_list[k][1].split(';')
                        x,y=float(buff_coordinate[0]),float(buff_coordinate[1])
                        diff=math.hypot(self.lat_to_x_diff(abs(self.drone_coordinates[0]-x)),self.long_to_y_diff(abs(self.drone_coordinates[1]-y)))
                        if(diff<=maxx):
                            maxx=diff
                            index=k
                check_list[index]=False
                self.destination_list.append([self.box_type[index],self.d_list[index][1].split(";"),self.d_list[index][0]])      
            
            for l in range(int(len(self.box_type)/2)):
                m=0
                r_maxx=1000
                r_index=0
                for m in range(len(self.box_type)):
                    if(self.box_type[m]=="RETURN "):
                        if(check_list[m]):
                            r_buff_coordinate=self.d_list[m][0].split(';')
                            r_x,r_y=float(r_buff_coordinate[0]),float(r_buff_coordinate[1])
                            t_x,t_y=float(self.destination_list[2*l][1][0]),float(self.destination_list[2*l][1][1])
                            r_diff=math.hypot(self.lat_to_x_diff(abs(t_x-r_x)),self.long_to_y_diff(abs(t_y-r_y)))
                            if(r_diff<=r_maxx):
                                r_maxx=r_diff
                                r_index=m
                if(r_index!=0):
                    check_list[r_index]=False
                    self.destination_list.insert((2*l+1),[self.box_type[r_index],self.d_list[r_index][0].split(";"),self.d_list[r_index][1]])

            for itter in range(len(self.box_type)):
                switch_grid_destination=False
                if(self.destination_list[itter][0]=='DELIVERY'):
                    if(not switch_grid_destination):
                        box_pose=self.destination_list[itter][2]
                        if(box_pose[0]=='A'):
                            for i in range(4):
                                if(int(box_pose[1])==i):
                                    self.coordinates.append([self.delivery_grid[0],((i-1)*self.diff_grid[1]+self.delivery_grid[1]),self.drone_coordinates[2]])
                        elif(box_pose[0]=='B'):
                            for i in range(4):
                                if(int(box_pose[1])==i):
                                    self.coordinates.append([(1*self.diff_grid[0]+self.delivery_grid[0]),((i-1)*self.diff_grid[1]+self.delivery_grid[1]),self.drone_coordinates[2]])
                        elif(box_pose[0]=='C'):
                            for i in range(4):
                                if(int(box_pose[1])==i):
                                    self.coordinates.append([(2*self.diff_grid[0]+self.delivery_grid[0]),((i-1)*self.diff_grid[1]+self.delivery_grid[1]),self.drone_coordinates[2]])
                        switch_grid_destination=True
                    if(switch_grid_destination):
                        self.coordinates.append([float(self.destination_list[itter][1][0]),float(self.destination_list[itter][1][1]),float(self.destination_list[itter][1][2])])
                
                elif(self.destination_list[itter][0]=="RETURN "):
                    if(not switch_grid_destination):
                        self.coordinates.append([float(self.destination_list[itter][1][0]),float(self.destination_list[itter][1][1]),float(self.destination_list[itter][1][2])])
                        switch_grid_destination=True
                    if(switch_grid_destination):
                        box_pose=self.destination_list[itter][2]
                        if(box_pose[0]=='X'):
                            for i in range(4):
                                if(int(box_pose[1])==i):
                                    self.coordinates.append([self.return_grid[0],((i-1)*self.diff_grid[1]+self.return_grid[1]),self.drone_coordinates[2]])
                        elif(box_pose[0]=='Y'):
                            for i in range(4):
                                if(int(box_pose[1])==i):
                                    self.coordinates.append([(1*self.diff_grid[0]+self.return_grid[0]),((i-1)*self.diff_grid[1]+self.return_grid[1]),self.drone_coordinates[2]])
                        elif(box_pose[0]=='Z'):
                            for i in range(4):
                                if(int(box_pose[1])==i):
                                    self.coordinates.append([(2*self.diff_grid[0]+self.return_grid[0]),((i-1)*self.diff_grid[1]+self.return_grid[1]),self.drone_coordinates[2]])
                        
            for u in range(len(self.coordinates)):
                print(self. coordinates[u])
            print(len(self.coordinates))
            self.cnt+=1

if __name__ == "__main__":
    reader = Data_processing()
    rate = rospy.Rate(1/reader.sample_time)
    while not rospy.is_shutdown():
        reader.read_data()
        rate.sleep()
