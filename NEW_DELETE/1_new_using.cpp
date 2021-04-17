#include<iostream>
using namespace std;
int main(){
    float *a=new float(32.48);//for dlc as well initialize
    cout<<"address:"<<a<<"\nvalue:"<<*a<<endl;
    int *b=new int[4];//initializing the array of integer
    delete(b);//for delete indivisual variable
    // delete(b[2]);//it cant delete indivisual element from the array
    delete[] b;//for deleting the entire array
    return (0);



}