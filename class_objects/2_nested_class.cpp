#include<iostream>
using namespace std;
class parent{
    private:
        class child{
            public:
                int a=10;
                void set_data()
                {
                    cout<<a;
                }
        }x;
    public:
        child c;//if we make this object as public then and then we are able to acces its public functions

};

int main(){
    // parent::child c;//incaasecible beacause it defined as the private
    //so we hae to creat object of it in the class "parent" if we want to access it
    parent p;
    // cout<<p.c.a<<endl;//it also not accesible because class it totally private
    //we have access it from in side the class itself
    p.c.set_data();
    // p.x.set_data();//will throw an error because its defined as private

}