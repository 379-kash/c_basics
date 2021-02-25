#include<iostream>
using namespace std;

class cube{
    private:
            float h,b,l;
            int selector;
    
    public:
            
            void set_data(){
                cout<<"please enter the height width and length"<<endl;
                cin>>h>>b>>l;
            }
            void display_data(){
                cout<<"enter 1 for surface area\nenter 2 for volume\n"<<endl;
                cin>>selector;
                switch (selector){
                    case 1:
                        cout<<"surface area is:"<<6*l*b<<endl;
                        break;
                    case 2:
                        cout<<"volume is:"<<l*b*h<<endl;
                        break;
                    default:
                        cout<<"invelid number"<<endl;
                }
            }


};
int main(){
    cube c1;
    c1.set_data();
    c1.display_data();
    return 0;
}