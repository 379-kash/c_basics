#include<iostream>
using namespace std;
class test_point{
    public:
        int a=10;
};
int main(){
    test_point s;

    int test_point::*q=&test_point::a;

    cout<<s.*q;

}