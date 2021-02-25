#include<stdio.h>
int main()
{
    int a[10]={5,2,7,9,4,2,5,7,3,17};
    int swp=0;
    for(int i=0;i<=8;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(a[j]>=a[i])
            {
                swp=a[j];
                a[j]=a[i];
                a[i]=swp;
            }
        }
    }
    for(int k=0;k<=9;k++)
    {
        printf("%d\n",a[k]);
    }
}