#include<iostream>
using namespace std;
int main(){
int x=10;

int* FirstPointer;
void* SecondPointer;
FirstPointer=/*(int *)*/SecondPointer;
// SecondPointer=FirstPointer;
// cout<<*(int *)SecondPointer<<endl;//typecasting ofthe void pointer to the int pointer
//in c assignment operation will not generate any error but while printing it it will be miss match between type so we have to manually typecast it.
return 0;
}