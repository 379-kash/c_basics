#include "iostream"
using namespace std;

class student{
    protected:
      string name;
      int id,sem;

    public:
        void set_data_student_details(){
            cout<<"please enter your...\nname\nid\nsem"<<endl;
            cin>>name>>id>>sem;
        }
        void get_data_student_details(){
            cout<<"name: "<<name<<endl;
            cout<<"id: "<<id<<endl;
            cout<<"sem: "<<sem<<endl;
        }
};

class sessional{
    protected:
        int sessional_marks[5];
        int sessional_total=0;
    public:
        void set_data_sessional_marks(){
            cout<<"please enter your sessional's marks of 5 subjects"<<endl;
            for(int i=0;i<5;i++){
                cin>>sessional_marks[i];
                sessional_total+=sessional_marks[i];
            }
        }
        void get_data_sessional_marks(){
            cout<<"your score in sessional is given below: "<<endl;
            for(int i=0;i<5;i++){
                cout<<sessional_marks[i]<<"  ";
            }
            cout<<endl<<"total out of 500 is: "<<endl;
            cout<<sessional_total<<endl;

        }
};
class external{
    protected:
        int external_marks[5];
        int external_total=0;
    public:
        void set_data_external_marks(){
            cout<<"please enter your external's marks of 5 subjects"<<endl;
            for(int i=0;i<5;i++){
                cin>>external_marks[i];
                external_total+=external_marks[i];
            }
        }

        void get_data_external_marks(){
            cout<<"your score in external is given below: "<<endl;
            for(int i=0;i<5;i++){
                cout<<external_marks[i]<<"  ";
            }
            cout<<endl<<"total out of 500 is: "<<endl;
            cout<<external_total<<endl;

        }

        
};

class marksheet:public external,public sessional,public student{
    public:
        void set_data(){
            set_data_student_details();
            set_data_sessional_marks();
            set_data_external_marks();
        }
        void get_data(){
            get_data_student_details();
            get_data_sessional_marks();
            get_data_external_marks();
        }
};
int main(){
    marksheet s;
    // s.set_data();
    // s.get_data();
    cout<<sizeof(external);
    return 0;
}