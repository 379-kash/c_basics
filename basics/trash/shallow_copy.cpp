#include<iostream>
using namespace std;
class a{
    public:
        int x;
};
int main(){
    a a1;
    a1.x=100;
    a a2=a1;
    a2.x=2;
    cout<<&a1.x<<endl;
    cout<<&a2.x<<endl;

    

}