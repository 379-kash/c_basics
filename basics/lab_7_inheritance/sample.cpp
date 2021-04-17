#include <iostream>
using namespace std;
class X {
    protected:
        int a;
    public:
        X(void);
};
class Z : private X {
    public:
        Z(void);
        int make_aa(void);
};
X::X(void) 
{ 
    a=10; 
    cout<<"initializing X\n"; 
}
Z::Z(void) 
{ 
    cout<<"initializing Z\n"; 
    }
int Z::make_aa(void)
{ 
    return a*a; 
    }
int main(){
    Z i;
    cout<<i.make_aa( )<<endl;
    return 0;
}