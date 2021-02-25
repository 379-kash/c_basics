#include<iostream>
using namespace std;
class count{
    private:

    public:
        static int a;
        count(){
            static int q=0;
            q++;
            a++;
            cout<<"its printed for "<<q<<" times"<<endl;

        }
        void show(){
            static int s=10;
            cout<<a<<endl;
            s++;
            cout<<"s is :"<<s<<endl;
        }
};
int count::a;
int main(){
    count  c1,c2;

    c1.show();
    c2.show();

}