#include "iostream"
using namespace std;
static int i=0;
class Book{
    private:
        string auth_name;
        string publisher;
        string title;
        float price;
    public:
    //constructor
        Book(string buff_auth_name="Unknown",string buff_publisher="Unknown",string buff_title="Unknown",float buff_price=0.0){
            auth_name=buff_auth_name;
            publisher=buff_publisher;
            title=buff_title;
            price=buff_price;
        }
        //distructor
        ~Book(){
            cout<<"destructore is called"<<endl;
        }
        void set_data(){
            
            cout<<"enter author name"<<endl;
            cin>>auth_name;
            cout<<endl;
            cout<<"enter the name of publisher"<<endl;
            cin>>publisher;
            cout<<endl;
            cout<<"enter title of the book"<<endl;
            cin>>title;
            cout<<endl;
            cout<<"enter the price"<<endl;
            cin>>price;
            cout<<endl;
        }
        void display(string buff_title,string buff_auth_name){
            if(buff_auth_name==auth_name and buff_title==title){
                cout<<"author name:"<<endl;
                cout<<auth_name<<endl<<endl;
                cout<<"publisher name:"<<endl;
                cout<<publisher<<endl<<endl;
                cout<<"title:"<<endl;
                cout<<title<<endl<<endl;
                cout<<"price:"<<endl;
                cout<<price<<"/-"<<endl<<endl;

            }
        }
        void display(){
            cout<<"author name:"<<endl;
            cout<<auth_name<<endl<<endl;
            cout<<"publisher name:"<<endl;
            cout<<publisher<<endl<<endl;
            cout<<"title:"<<endl;
            cout<<title<<endl<<endl;
            cout<<"price:"<<endl;
            cout<<price<<"/-"<<endl<<endl;
        }

};
void Book_details(){

}
int main(){

    Book b[3];
    
    bool work_flag=true;
    while(work_flag){
        int y;
        string a,c;
        cout<<"please enter 1 for enter the book details\nenter 2 for searching the book\nenter 3 for Display book\n enter 0 for exiting the program"<<endl;
        cin>>y;
        if(y==1){
            for(int r=i;r<3;r++){
                int x;
                b[i].set_data();
                i++;
                cout<<"do you want to add more book details?\n1 for yes and 0 for no"<<endl;
                cin>>x;
                if(x){continue;}
                else{break;}
                }
                // break;
        }else if(y==2){
       
            cout<<"enter title and publisher name"<<endl;
            cin>>a;
            cin>>c;
            for(int q=0;q<=i;q++){
                cout<<"helllllllllllo"<<endl;
                b[q].display(a,c);
            }

        }else if(y==3){
       
            for(int w=0;w<3;w++){
                b[w].display();
            }
        }else if(y==0){
            work_flag=false;
        }
    }
    return (0);
}
