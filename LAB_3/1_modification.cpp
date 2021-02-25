#include<iostream>
using namespace std;
int cnt1=0;
class Distance {
    private:
        int mts;
        int cms;
    public:
        //constructure with no argument
        Distance(){
            mts=0;
            cms=0;
            // cout<<"constructure is called"<<endl;
        }
        //constructue is having 2 arguments
        Distance(int buff1,int buff2){
            mts=buff1;
            cms=buff2;
            // cout<<"constructure is called"<<endl;
        }
        //constructur with 1 argument
        Distance(int buff2){
            mts=buff2;
            cms=0;
            // cout<<"constructure is called"<<endl;
        }
        void get_data();
        void display();
        void cal_distance(Distance,Distance);
};
void Distance::get_data(){
    cout<<"enter Distance in mts"<<endl;
    cin>>mts;
    cout<<"enter data in cms"<<endl;
    cin>>cms;
}
void Distance::display(){
    while((cms>=10)|(cms>0 & mts<0)){
        mts++;
        cms-=100;
    }
    while(cms<0 & mts>0){
        mts--;
        cms+=100;
    }
    cout<<"meters:"<<mts<<endl<<"centimeters :"<<cms<<endl; 
}
void Distance::cal_distance(Distance d1,Distance d2){
    mts=d1.mts-d2.mts;
    cms=d1.cms-d2.cms;
    cout<<cms<<endl<<mts<<endl;
}
int main(){
    Distance di1(1,50),di2(0),di3;
    // di1.get_data();
    // di2.get_data();
    di3.cal_distance(di1,di2);
    cout<<"content of di1: "<<endl;
    di1.display();
    cout<<"content of di2: "<<endl;
    di2.display();
    cout<<"content of di3: "<<endl;
    di3.display();
    return (0);

}