#include<iostream>
using namespace std;
struct check{
    private:
    public:
        // int a=10;

        static int a;//baarr hoi to const rakhvu pade
        void get(){
            a=99;
            cout<<a;
        }
};
int main(){
    check A;
    // auto y;//required initializer to deduce the type
    // y=100;
    // A.a=10;
    // A.a=2;//no chale
    A.get();
    // char a=0010;
    // cout<<int(a);
    return (0);

}