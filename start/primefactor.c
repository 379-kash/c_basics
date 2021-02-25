#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    for(int i=n-1;i>0;i--)
    {
        cnt=0;
        if(n%i==0){
            printf("factor %d\n",i);
            for(int j=i-1;j>0;j--)
            {
                if(i%j==0)
                {
                    cnt++;
                }
            }
            if(cnt==1)
            {
                printf("prime factor %d\n",i);
            }

            
        }
    }

}