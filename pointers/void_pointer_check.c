#include<stdio.h>
int main(){
int x=10;

int* FirstPointer;
void* SecondPointer=&x;
FirstPointer=SecondPointer;
// SecondPointer=FirstPointer;
printf("%d",*FirstPointer);
// printf("%d",*(int *)SecondPointer);//typecasting ofthe void pointer to the int pointer
//in c assignment operation will not generate any error but while printing it it will be miss match between type so we have to manually typecast it.
return 0;
}