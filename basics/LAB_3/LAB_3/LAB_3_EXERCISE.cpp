#include "iostream"
using namespace std;
static short int ward_capacity=2,total=5,present_patitent=0;
static short int cnt=0;
static short int ward_number=1;
class Patitent{
    string name,Sex;
    short int Ward,Bed_number;
    public:
        short int Age;
        Patitent(string buff_name="unknown",string buff_Sex="unknown",short int buff_Age=0,short int buff_Ward=0,short int buff_Bed_number=0){
            cnt++;
            name=buff_name;
            Sex=buff_Sex;
            Age=buff_Age;
            Ward=ward_number;
            Bed_number=cnt;
            cout<<ward_number<<Bed_number<<endl;
            if(cnt==ward_capacity){
                ward_number++;
                cnt=0;
            }
        }
        void input(){
            cout<<"please enter the name of the patitent:"<<endl;
            cin>>name;
            cout<<"please enter the Age of the patitent:"<<endl;
            cin>>Age;
            cout<<"please enter the gender of the patitent:"<<endl;
            cin>>Sex;
            cout<<Ward<<endl<<Bed_number<<endl;
        }
        void input(short int a,short int b){
            if(a=Ward and b==Bed_number){
                cout<<"please enter the name of the patitent:"<<endl;
                cin>>name;
                cout<<"please enter the Age of the patitent:"<<endl;
                cin>>Age;
                cout<<"please enter the gender of the patitent:"<<endl;
                cin>>Sex;
            }
        }
        void display(short int a,short int b){
            if(a==Ward and b==Bed_number){
                cout<<"name :"<<endl;
                cout<<name<<endl<<endl;
                cout<<"gender :"<<endl;
                cout<<Sex<<endl<<endl;
                cout<<"Age :"<<endl;
                cout<<Age<<endl<<endl;
                
            } 
        }
        void display(){
            {
                cout<<"name :"<<endl;
                cout<<name<<endl<<endl;
                cout<<"gender :"<<endl;
                cout<<Sex<<endl<<endl;
                cout<<"Age :"<<endl;
                cout<<Age<<endl<<endl;
                cout<<Ward<<Bed_number<<endl;
                
            } 
        }
};
int main(){
    bool itter=true;
    Patitent p[5];
    // for(int i=0;i<5;i++){
    //     p[i].display();
    // }
    short int buff_flag;
    while(itter){
        cout<<"please enter 1 for patitent detail entry.\n2 for modification in details of perticular patitent.\n3 for display data of perticular patitent"<<endl;
        cin>>buff_flag;
        if(buff_flag==1){
            while(present_patitent<=5){
                p[present_patitent].input();
                present_patitent++;
                cout<<"do you want to enter more patitent details ? \n1 for yes 0 for no"<<endl;
                short int conti_flag;
                cin>>conti_flag;
                if(conti_flag){cout<<"ready with next details"<<endl;}
                else{break;}
            }
        }
        else if(buff_flag==2){
            cout<<"please enter the ward number as well as room number for modification in the details!"<<endl;
            int a,b;
            cin>>a>>b;
            for(int i=0;i<present_patitent;i++){
                p[i].input(a,b);
            }
        }
        else if(buff_flag==3){
            cout<<"please enter the ward number and bed number for the details of the patitent"<<endl;
            short int a,b;
            cin>>a>>b;
            for(int i=0;i<present_patitent;i++){
                p[i].display(a,b);
            }

        }
        cout<<"do you want to continue ?\n1 for yes 0 for no"<<endl;
        cin>>itter; 
    }
    cout<<endl<<endl<<"the sorted details of the patitent is:"<<endl;
    for(int i=0;i<present_patitent-1;i++){
        for(int j=i+1;j<present_patitent;j++){
            Patitent g;
            if(p[i].Age>=p[j].Age){
                g=p[i];
                p[i]=p[j];
                p[j]=g;
            }
        }
    }
    for(int i=0;i<present_patitent;i++){   
        p[i].display();
    }
    return (0);
}