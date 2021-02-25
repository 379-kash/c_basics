#include<iostream>
using namespace std;
class balaji{
    public:
        int a=10;
        int b=20;
        void show(){
            cout<<a<<'\n'<<b<<endl;

        }
};
int main(){
    balaji a,*b;
    a.a=1;
    a.show();
    b=&a;
    // b.show();
    (*b).a=89;
    cout<<a.a<<endl;

}