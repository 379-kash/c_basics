#include<iostream>
using namespace std;
class cpy{
    public:
        int x,y;
        cpy(int a,int b)
            :x(a),y(b)
        {
            
            cout<<"default constructure"<<endl;
        }
        cpy(const cpy &old_obj){
            cout<<"copy constructure"<<endl;
            x=old_obj.x;
            y=old_obj.y;
        }
};
int main(){
    cpy c1(10,20);
    cpy c2=c1;
    //here is another way to call copy constructot 
    cpy c3(c2);
    cout<<c2.x<<c2.y<<endl;
    cout<<c3.x<<c3.y<<endl;


}
