#include<iostream>
using namespace std;
class mutation{
    public:
        // mutable int a=10;
        int a;
        //below is the constructor
        // mutation(){
        //     a=2;
        // }
};
int main(){
    const mutation b;
    cout<<b.a;
    // b.a=100;
    cout<<b.a;

}