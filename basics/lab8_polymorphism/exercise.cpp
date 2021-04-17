/*Create a class called Number has one data member of type integer. There two member
function Setvalue( ) which will set the value of data member and show( ) to display the
value. Drive a class HexType, DecimalType and OctType from base class which redefined
the show() will display the value of data member of base class in respective number base.*/

#include "iostream"
using namespace std;

class Number{
    protected:
        int int_number;

    public:
        void Setvalue(int buff){
            int_number=buff;
        }
        virtual void show(){
            cout<<int_number<<endl;
        }
};
class HexType : public Number{
    public:
        char s[15];
        void show(){
            sprintf(s,"%X",int_number);
            cout<<s<<endl;
        }
};

class DecimalType : public Number{
    public:
        char s[15];
        void show(){
            sprintf(s,"%u",int_number);
            cout<<s<<endl;
        }
};

class OctType : public Number{
    public: 
        char s[15];
        void show(){
            sprintf(s,"%o",int_number);
            cout<<s<<endl;
        }
};

int main(){

    Number *n;
    HexType h;
    DecimalType d;
    OctType o;
    //for hex value
    h.Setvalue(250);
    cout<<"hex output is :";
    n=&h;
    n->show();

    //for decimal value
    d.Setvalue(250);
    cout<<"decimal output is :";
    n=&d;
    n->show();
    
    //for octal value
    o.Setvalue(250);
    cout<<"octal output is :";
    n=&o;
    n->show();

    return (0);
}