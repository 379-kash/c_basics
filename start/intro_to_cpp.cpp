#include<iostream>
using namespace std;//seince we are having cout in iostream only so we are defining it once

int main()
{
    cerr<<" joine nakhne aama error aave che\n";//desplaying the error masg we can use it in eeption debugging
    /*as far as cerr consern its unbuffered error generatior so you can immediatly generate the error*/
    cout<<"hello world"<<endl;//endl is for new line char
    cout<<"hiii\n";
    cout<<"bhai bhai"<<"\n";

    return 0;
}
/*endl basically equal to the "\n" with flush it will clear all the data which is written on the output buffer so thaat any hang will not be there
there will be affectioms if very big program will be there printing on the screen 
it will consume some time to flush all data from the bbufer*/