#include<stdio.h>
int main(){
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    int *i;
    i=&a[0][0];

    printf("%d",(*(*(a+1)+1)));
    return (0);
}