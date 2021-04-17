#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
        void get_data(){
            cout<<"real="<<real<<endl;
            cout<<"imagenery="<<img<<endl;

        }
        void set_data(int a,int b){
            real=a;
            img=b;
        }     
};
int main(){
    complex c1;
    complex *c=&c1;
    complex *c2=new complex;//by dma
    complex *c3=new complex[4];
    (*c).set_data(10,20);
    (*c).get_data();
    c1.get_data();
    c->get_data();//-> denotes that first derefrance that pointer and then run the set data function of address in which it saved
    //upper is as same as (*c).get_data();
    (*(c3+2)).set_data(22,11);
    (*(c3+2)).get_data();
    // c[3].get_data();//please cant do this its pointers not any ordinary arrat


}