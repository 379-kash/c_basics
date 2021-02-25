#include<iostream>
using namespace std;

class shape{
  public:
    int area(int);
    double area(double,int);
    long area(long,int,int);

};
int shape::area(int r){ return 4*3.14*r*r;}
double shape::area(double r,int h){return (3.14*r*h+2*3.14*r*r);}
long shape::area(long l,int b,int h){return (2*l*b+2*b*b+2*h*l);}

int main(){
shape sphere,cylinder,cube;
cout<<"area of sphere is\n"<<sphere.area(10)<<endl;
cout<<"area if cylinder is\n"<<cylinder.area(2.5,8)<<endl;
cout<<"area of cube is\n"<<sphere.area(100L,75,15)<<endl;
return 0;
}