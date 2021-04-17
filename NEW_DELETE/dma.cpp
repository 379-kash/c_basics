#include<iostream>

int main(){
    int *a;
    a=new int(10);
    int *b=(int *)malloc(2*sizeof(int));
    std::cout<<b<<std::endl;
    *b=10000;
    std::cout<<a<<"   "<<b<<std::endl;
    std::cout<<*a<<"   "<<*b<<std::endl;

    free(a);
    delete(b);
    std::cout<<a<<"   "<<b<<std::endl;
    std::cout<<*a<<"   "<<*b<<std::endl;



}