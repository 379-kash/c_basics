#include<iostream>
using namespace std;
char* deb(){
    return "kashyap";
}
void sum(auto);
int main(){
    auto a=deb();
    // int a.size();//did not worked because of the char type does not support the size();

    cout<<a;
    sum("kashyap");


}
void sum(auto a){
    cout<<a;

}
//great you can use auto like this but remember dont mess it up with the pointers......it horrible .   .
//                                                                                                   |
//                                                                                                  ( )