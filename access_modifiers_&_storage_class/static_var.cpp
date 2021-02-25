#include<iostream>
using namespace std;
class sta{
    private:

    public:
        static int a;
        sta(){
            a=110;
            cout<<a;
        }
        ~sta(){
            cout<<"bye bye khatam gaya good bye "<<endl;
        }
        void mm(int w){
            cout<<"hello its static class member"<<endl;
            a=w;
            cout<<a;
        }
};
int sta::a;
int main(){
//    sta A;
//    cout<<A.a<<endl;
//    sta::mm();
//    sta::a=1000;//it non static so we cant do that 
// A.a=1045;
//    cout<<A.a;

//    cout<<endl;
//    A.mm(10);
//    cout<<endl;
cout<<sta::a;
}