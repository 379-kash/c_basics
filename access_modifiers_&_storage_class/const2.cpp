#include<iostream>
using namespace std;
int main(){
    int a=10;
    int * const i=&a;
    int b=30;
    // i=&b;//its not possible to change the value of address in pointer...
    const int *q=&a;
    // *q=20;//it wont work because its value should be constant...
    cout<<*q;

}