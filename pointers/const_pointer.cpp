#include<iostream>
using namespace std;
int main(){
    // int a[2]={10,20};
    // int * const ptr=&a;
    // ptr++;
    int a=10,b=20,c;
    c=a;
    a=b;
    b=c;
    printf("%d,%d,%d",a,b,c);
    //yehhh its going to creat the error because :"cannot convert ‘int (*)[2]’ to ‘int* const’ in initialization"
    //also we can't change the address of the const pointer
    //there is also pointer to constent..
    //dlc-> const int *x;
    //its value will not being changed we can change its refrence
    // const int *x=&a;
    // x=&b;
    // printf("%d",*x);


}