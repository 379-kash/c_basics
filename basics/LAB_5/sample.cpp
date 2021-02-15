#include<iostream>
using namespace std;
class String{
    string name;
    public:
        String(string buff_string){
            name=buff_string;
        }
        int operator == (String);

};
int String::operator == (String s1){
    if(name==s1.name)
    return 1;
    else
    return 0;
}
int main(){
    String w("kashyap");
    String z("kashyap");
    cout<<(w==z)<<endl;
    return 0;
}