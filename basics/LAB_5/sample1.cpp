#include "iostream"
#include "string.h"
using namespace std;
class String{
    char Name[25];
    public:
        String(char *name){
            strcpy(Name,name);
        }
        int operator ==(String);
};
int String::operator ==(String s1){
    if(strcmp(Name,s1.Name))
        return (0);
    else
        return (1);
}

int main(){
    String Str1("hello");
    String Str2("hello");
    if(Str1==Str2)
        cout<<"both strings are equal"<<endl;
    else
        cout<<"strings are not equal"<<endl;
    return (0);

}