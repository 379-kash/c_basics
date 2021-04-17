#include<stdio.h>
int main()
{
    char str[]="DDU UNI";
    int i=0;
    int cnt=0;
    while(str[i]!= NULL)
    {
        i++;
    }
    printf("length: %d\n",i);
    while(i>=0)
    {
        printf("%c",str[i-1]);
        i--;
    }


    
    
}