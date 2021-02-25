#include<iostream>
using namespace std;
// const int r=10;

void show(int a,int b,const int c=10,int x=20){
    // c++;//defining const in parameter will reflet oin the function body not at the time while giving it value
    cout<<a+b+c+x<<endl;
}
int main(){
    // r=10;
    show(1,2,2);//it will just provide it all value and assign it propperly
}
//static storage class is not being defined as the parameters and const wouldent work in the parameters...