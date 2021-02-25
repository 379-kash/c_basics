#include<iostream>
using namespace std;

int main(){
    // register static int a=10;//not more than 2 could be used
    register int a=10;
    cout<<&a;
}
