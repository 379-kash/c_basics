#include<stdio.h>
int main(){
    int a,*b,**c;
    a=10;
    b=&a;
    c=&b;
    printf("%d",**c);
    **c=500;
    printf("%d",a);
    return (0);
}