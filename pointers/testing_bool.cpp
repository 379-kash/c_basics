#include<iostream>
using namespace std;
int main(){
    bool flag;
    int t;
    flag=true;
    while(flag){
        cin>>t;
        printf("%d",!t);

        if(!t){
            flag=false;
        }
    }
}