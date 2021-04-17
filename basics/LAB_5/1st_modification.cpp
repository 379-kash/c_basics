#include<iostream>
#include<string.h>
using namespace std;
class String{
    char name[25];
    public:
        String(char *buff_string){
            strcpy(name,buff_string);
        }
        string operator + (String);

};
string String::operator + (String s1){
    return strcat(name,s1.name);
}
int main(){
    String w("hii ");
    String z("there");
    cout<<w+z<<endl;
    return 0;
}