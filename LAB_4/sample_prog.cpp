#include<iostream>
using namespace std;
class shape{
  public:
    int volume(int);
    double volume(double,int);
    long volume(long,int,int);

};
int shape::volume(int r){ return 4*3.14*r*r*r/3;}
double shape::volume(double r,int h){return 3.14*r*r*h;}
long shape::volume(long l,int b,int h){return l*b*h;}

int main(){
shape sphere,cylinder,cube;
cout<<"volume of sphere is  "<<sphere.volume(10)<<endl;
cout<<"volume if cylinder is  "<<cylinder.volume(2.5,8)<<endl;
cout<<"volume of cube is   "<<cube.volume(100L,75,15)<<endl;
return 0;
}
