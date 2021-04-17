#include<iostream>
using namespace std;
class modify{
    private:
        int *x;
    public:
        const int* const getx() const{
            // x=12;//cant do because function is only able to read not able to modify.it only apply to the functions
            return x;
        }
    
};
int main(){
    const int a=10;//it read only now
    int b=a;
    cout<<b;

}