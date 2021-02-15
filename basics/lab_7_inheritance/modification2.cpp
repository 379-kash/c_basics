#include <iostream>
using namespace std;
class X {
    protected:
        int a;
        int b;
    public:
        X(void);
};
class Z : public X {
    public:
        Z(void);
        int make_aa(void);
        float multiply();
};
X::X(void) 
{ 
    a=10; 
    b=50;
    cout<<"initializing X\n"; 
}
Z::Z() 
{ 
    a=20;
    b=30;
    cout<<"initializing Z\n"; 
    }
int Z::make_aa(void)
{ 
    return a*a; 
    }
float Z::multiply()
{
    return a*b;
}

int main(){
    Z i;
    cout<<i.make_aa( )<<endl;
    cout<<i.multiply();
    return 0;
}