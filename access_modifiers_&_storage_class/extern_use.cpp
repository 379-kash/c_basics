#include<iostream>
using namespace std;
int y=10;

void show(int);
int main(){
    extern int x;
    
    
    show(10);
    // cout<<x;

}
void show(int a){
    int x=10000;
    cout<<x;
    cout<<y;
}