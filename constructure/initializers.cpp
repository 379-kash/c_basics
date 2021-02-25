#include<iostream>
using namespace std;
class init{
    public:
        int a;
        string b;
        init()
            :b("kashyap"),a(10)
            //makesure that you always initialize the member varaiables by the order of decleration 
            //because it is having some dependencies
            //here i haven't followed the rule but its bad ;)
            {

            }
};
int main(){
    init d;
    cout<<d.a<<endl<<d.b<<endl;
    return 0;

}