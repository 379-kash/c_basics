#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;i++){
        for(int j=9;j>=i;j--){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            if((j-1)<=((2*i-1)/2)){
                cout<<i-j+1<<" ";
            }else{
                cout<<j-i+1<<" ";
            }
        }
        cout<<endl;
    }
}