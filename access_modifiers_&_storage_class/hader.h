#ifndef HEADER_H
#define HEADER_H
#include<iostream>


// any source file that includes this will be able to use "global_x"
extern int global_x;

void t();
void print_global_x(){
    std::cout<<global_x;
}

#endif