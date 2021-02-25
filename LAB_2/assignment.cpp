#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class experiment{
    private:
        float voltage_across_capacitor[5]={0,0,0,0,0};
        float time[5]={0,0,0,0,0};
        float capacitance;
        float resistance;
        float voltage;

    public:
        void get_data(){
            cout<<"enter the value of the capacitance\n"<<endl;
            cin>>capacitance;
            cout<<"enter the value of resistance\n"<<endl;
            cin>>resistance;
            cout<<"enter the rating of your power supply\n"<<endl;
            cin>>voltage;
        }

        void calculation(){
            for(int i=0;i<5;i++){
                time[i]=(i+1)*resistance*capacitance;
                float buff=1-exp((-1)*(time[i]/resistance*capacitance));
                voltage_across_capacitor[i]=voltage*buff;

            }
        }

        void show_data(){
            for(int j=0;j<5;j++){
                cout<<"for time constent:  "<<j+1<<"="<<time[j]<<"  voltage across capacitor ="<<voltage_across_capacitor[j]<<endl;
            }
        }
};

int main(){
    experiment first_exp;
    first_exp.get_data();
    first_exp.calculation();
    first_exp.show_data();
    return 0;

}