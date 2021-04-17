#include<stdio.h>
int main(){
    int x=0;
    float c=0;
    printf("enter one number\n");
    scanf("%d",&x);
    printf("factors of your number are/is\n");
    for(int i=((x/2)+1);i>0;i--){
        
        if(x%i==0){
            printf("%d\n",i);
        } 
    }
    

}