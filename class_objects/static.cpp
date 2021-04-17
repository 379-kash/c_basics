#include<iostream>
using namespace std;
class staticc{
    public:
        void show(){
            static int a;//single copy of this variable is created
            cout<<a;
            a++;

        }
}a;
int main(){
    a.show();
    a.show();
    staticc b;
    a.show();

}