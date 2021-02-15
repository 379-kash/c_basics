#include<iostream>
using namespace std;
class Complex{
    public:
        int real,imag;
    public:
        Complex(int r){
            real=imag=r;
        }
        Complex(int r,int i){
            real=r;
            imag=i;
        }
        Complex(const Complex &c){
            real=c.real;
            imag=c.imag;
        }
        void printComplex(){
            cout<<"\n The sum of two complex nos. is "<<real<<"+"<<imag<<"i.";
        }
        void SumComplex(Complex obj1,Complex obj2){
            real=obj1.real+obj2.real;
            imag=obj1.imag+obj2.imag;
        }
};
int main(){
    Complex c1(2);
    Complex c2=c1;
    Complex c3(3,4);
    cout<<c1.imag<<endl<<c1.real<<endl<<endl;;
    c1.SumComplex(c2,c3);
    c1.printComplex();
    return (0);
}