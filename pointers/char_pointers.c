#include<stdio.h>
int main(){
    char *a[3]={
                    "kashyap",
                    "vandan",
                    "kai kai"
                };
    printf("%s\n0",(*(a+1)+1));
    printf("%s",a[0]+1);
    return (0);
}