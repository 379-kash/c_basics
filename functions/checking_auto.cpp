#include<iostream>
using namespace std;
inline auto value(){
    return 1;

}
//you can heck water this code on set to be inline or not by just typing this simple command
// g++ -S checking_auto.cpp 
// it will generate .s file which is in assembly language and...
// you can compare both the files and see that "text selection" and "global value" is missing from the inline function file...
// which indecates that its sucessfully defined as inline function
int main(){
    cout<<value()<<endl;
    cout<<value()<<endl;
    cout<<value()<<endl;
    return (0);
}