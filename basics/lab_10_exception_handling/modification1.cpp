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

int main(){
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

        }
        if(limiter==3){
            abort();
        }
    }
    cout<<"\n nans="<<c<<endl;
    return (0);
}