#include<iostream>
using namespace std;
class This{
    int a;
    public:
        void get_data(){
            cout<<"a:"<<a<<endl;
        }
        void set_data(float a){
            this->a=a;//this will point to the object's that variable in which this the function is called
            // a=a;//it will not work because its not possible to define locally a==a;
        }
};
int main(){
    This A;
    A.set_data(12);
    A.get_data();
    
}