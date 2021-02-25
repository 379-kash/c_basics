#include<iostream>
using namespace std;
//it will basically do the shallow copy
class student{
    public:
        int x;
        int y;

};

int main(){
    student s1;
    s1.x=10;
    s1.y=20;
    student s2=s1;
    student s3;
    s3=s2;
    cout<<s3.x<<endl;
}
