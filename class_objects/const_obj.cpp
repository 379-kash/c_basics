#include<iostream>
using namespace std;
class cost{
    public:

        int a;
        int b;
        cost(){
            a=b=10;
        }
        void show() const{
            cout<<"HELLO WORLD"<<endl;
            // a++;

        }
};
int main(){
    const cost A;
    A.show();
    A.a=100;
    

}