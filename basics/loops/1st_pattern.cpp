#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        if(i==0 or i==3){
            for(int j=0;j<4;j++){
                cout<<"*";
            }
            cout<<endl;
        }else{
            for(int j=0;j<4;j++){
                if(j==0 or j==3){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        
    }
    

}