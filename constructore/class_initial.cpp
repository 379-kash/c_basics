#include<iostream>
using namespace std;

class student_data{
    private:
            int roll_no;
            string name;
    public:
            void set_data(int x,string y){
                roll_no=x;
                name=y;
            }
            void get_data(){
                cout<<roll_no<<endl;
                cout<<name<<endl;
            }
};
int main(){
    student_data student1;
    student1.set_data(12,"kashyap joshi");
    student1.get_data();
    return 0;

}
