#include "iostream"
using namespace std;
#define PI 3.14

class Degree;

class Radian{
    public:
        float angle_in_rad;

        Radian(float buff_angle_in_rad)
        :angle_in_rad(buff_angle_in_rad){

        }
        // operator Degree(){
        //     return Degree(angle_in_rad*180/PI);
        // }
};
class Degree{
    public:
        float angle_in_degree;
        Degree(float buff_angle_in_degree)
        :angle_in_degree(buff_angle_in_degree){

        }
        operator Radian(){
            return Radian(angle_in_degree*PI/180);
        }
};
int main(){
    Radian r(1);
    Degree d(360);
    r=d;
    cout<<d.angle_in_degree<<endl;
    cout<<r.angle_in_rad<<endl;
}