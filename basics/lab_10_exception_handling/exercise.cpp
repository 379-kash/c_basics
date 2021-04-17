#include "iostream"
using namespace std;
static int limiter=0;
class Dummy{
    private:
        int n;
    public:
        Dummy(){

        }
        Dummy(int m){
            n=m;
        }
        int divide(int a){
            if(a==0){
                limiter++;
                throw a;
                cout<<"\n returning from divide"<<endl;
            }
            return(n/a);
        }
};
//definig own termination handler
void exp_handle(){
    cout<<"inside own termination handler"<<endl;
    cout<<"no catch is found for rethrow"<<endl;
    abort();
}
int main(){
    //setting own terminate function
    set_terminate(exp_handle);
    Dummy d1;
    int b,c;
    bool flag=true;
    d1=5;
    while(flag and limiter<3){
        cout<<"\n enter b\n"<<endl;
        cin>>b;
        try{
            c=d1.divide(b);
            flag=false;
        }
        catch(int x){
            cout<<"attempt of division by zero"<<endl;
            throw; //rethrow

        }
    }
    cout<<"\n nans="<<c<<endl;
    return (0);
}