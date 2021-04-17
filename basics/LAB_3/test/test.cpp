#include<iostream>
using namespace std;
class A{
    public:
        int w=10;
        int* a=&w;
        
};
int main(){
    A q;
    cout<<*(q.a);
}