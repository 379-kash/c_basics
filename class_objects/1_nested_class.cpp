#include<iostream>
using namespace std;
class parent{
    public:
        class child{
            public:
                int a;
        };
};
//it is better to make an another class then making any nested class public because it of no use
int main(){
    parent p;
    parent::child c;
    c.a=10;
    cout<<c.a;
}
