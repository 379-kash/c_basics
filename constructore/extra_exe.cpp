#include<iostream>
using namespace std;
class mark_sheet{
    private:
        int roll_no;
        string name;
       long int phone_no;
        int sem;
        string branch;
        int marks[5]={0,0,0,0,0};

    public:
        void get_data(){
            cout<<"please enter your name"<<endl;
            cin>>name;
            cout<<"please enter your roll_no"<<endl;
            cin>>roll_no;
            cout<<"please enter your phone_no"<<endl;
            cin>>phone_no;
            cout<<"please enter your semester"<<endl;
            cin>>sem;
            cout<<"please enter your branch_name"<<endl;
            cin>>branch;
            for(int i=0;i<5;i++){
                cout<<"please enter the marks of subject code out of 100: "<<i+1<<"  ";
                cin>>marks[i];
            }
        }

        void show_data(){
            int total=0;
            cout<<"roll no: "<<roll_no<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"phone no: "<<phone_no<<endl;
            cout<<"semester: "<<sem<<endl;
            cout<<"branch: "<<branch<<endl;
            cout<<"your marks for subject code is given below"<<endl;
            for(int i=0;i<5;i++){
                cout<<i+1<<"  "<<marks[i]<<endl;
                total+=marks[i];
            }
            cout<<"average is "<<(total/5)<<endl;
            cout<<"percentage is "<<(total*100/500)<<"%"<<endl;

        }

};

int main(){

    mark_sheet student[2];
    for(int i=0;i<2;i++){
        student[i].get_data();
        student[i].show_data();

    }
    
    return 0;

}