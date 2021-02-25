#include<iostream>
using namespace std;
class a{
    int x;
    public:
        void get(){
            cout<<x<<endl;
        }
        void set(int q){
            x=q;
        }
};
int main(){
    a a1;
    a1.set(10);
    a &a2=a1;
    a1.get();
    a2.get();
    a2.set(20);
    a1.get();
    a2.get();


    return (0);
}