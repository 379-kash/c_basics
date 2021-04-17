#include<iostream>
using namespace std;
int x=0;
void z(){
    x++;
    cout<<x<<endl;
}
void y(){
    x++;
    cout<<x<<endl;
}
void w(){
    x++;
    cout<<x<<endl;
}
int main(){
    y();z();w();
    cout<<x<<endl;
    return 0;
}