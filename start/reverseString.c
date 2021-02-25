#include<stdio.h>
int main()
{
    char str[]="kashyap";
    int i=0;
    int cnt=0;
    while(str[i]!=NULL)
    {
        i++;
    }
    printf("%d",i);
    while(i>=0)
    {
        printf("%c",str[i-1]);
        i--;
    }


    
    
}