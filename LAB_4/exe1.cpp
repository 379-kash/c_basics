#include<iostream>
using namespace std;

class Telephone_dir{
    public:
        long int phone_no;
        string name;
        string address;

    public:
    void store_data(){
        cout<<"please enter your phone number"<<endl;
        cin>>phone_no;
        cout<<"please enter your  name without space"<<endl;
        cin>>name;
        cout<<"please enter your phone address sepreted by \',\' and without space"<<endl;
        cin>>address;
    }

    void show_data(){
        cout<<"name :"<<name<<endl;
        cout<<"phone number :"<<phone_no<<endl;
        cout<<"address :"<<address<<endl;
    }


    void show_data(string str){
        cout<<"mr/mrs "<<str<<"'s data is given below"<<endl;
        cout<<"phone number :"<<phone_no<<endl;
        cout<<"address :"<<address<<endl;
    }

    void show_data(long int in){
        cout<<"phone number: "<<in<<"'s data is given below"<<endl;
        cout<<"name: :"<<name<<endl;
        cout<<"address :"<<address<<endl;
    }

    void modify(){
        long int phone_no_buff;
        string name_buff;
        string address_buff;
        cout<<"please enter name to be modified"<<endl;
        cin>>name_buff;
        name=name_buff;
        cout<<"please enter phone number to be modified"<<endl;
        cin>>phone_no_buff;
        phone_no=phone_no_buff;
        cout<<"plesase enter address to be modifies sepreted by\',\'"<<endl;
        cin>>address_buff;
        address=address_buff;
        
        show_data();

    }
};

int main(){
    bool check_loop=true;
    Telephone_dir ppl[2];
    for(int i=0;i<2;i++){
        ppl[i].store_data();
    }
    while(check_loop){
        cout<<"for modify the data please enter \'0\' and for showing the data please enter \'1\'"<<endl;
        short int check;//for checking the choises
        short int cnt=0;//for checking if there is duplicate dara or not
        short int index;//for storing the index to be modified
        string nm;
        cin>>check;
        if(check==0){
            cnt=0;
            cout<<"for modify by mane enter \'0\' and by phone number enter \'1\'"<<endl;
            short int byte;
            cin>>byte;
            if(byte==0){
                
                cout<<"please enter your name here"<<endl;
                cin>>nm;
                for(int j=0;j<2;j++){
                    if(ppl[j].name==nm){
                        cnt++;
                    }
                }
                if(cnt>=2){
                    cout<<"there are same names found please enter your current phone number"<<endl;
                    long pn_no;
                    cin>>pn_no;
                    for(int k=0;k<2;k++){
                        if(ppl[k].phone_no==pn_no){
                            ppl[k].modify();
                        }
                    }
                }
                else{
                    for(int k=0;k<2;k++){
                        if(ppl[k].name==nm){
                            ppl[k].modify();
                        }
                    }
                    
                }
            }
            else if(byte==1){
                cout<<" please enter your previous phone number"<<endl;
                long pn_no;
                cin>>pn_no;
                for(int k=0;k<2;k++){
                        if(ppl[k].phone_no==pn_no){
                            ppl[k].modify();
                        }
                    } 
            }
            }

        else if(check==1){
            cout<<"enter\'0\' if you have to see data by your name or enter \'1\' for see data by number"<<endl;
            short int ip_check;//for checking the cindition
            cin>>ip_check;
            if(ip_check==0){
                cout<<"plese enter your name"<<endl;
                string ip_nm_buff;//for storing the name for a while
                cin>>ip_nm_buff;
                for(int l=0;l<2;l++){
                    if(ppl[l].name==ip_nm_buff){
                        ppl[l].show_data(ip_nm_buff);
                    }

                }

            }
            else if(ip_check==1){
                cout<<"plese enter your phone number"<<endl;
                long int ip_nm_buff;//for storing the number for a while
                cin>>ip_nm_buff;
                for(int l=0;l<2;l++){
                    if(ppl[l].phone_no==ip_nm_buff){
                        ppl[l].show_data(ip_nm_buff);
                    }

                }
            }
            else{
                cout<<"it is not matched with your input"<<endl;
                continue;
            }

        }
        else{
            cout<<"you have entered some wrong information please enter correct information"<<endl;
            continue;
        }

    }
}