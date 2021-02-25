#include<iostream>
using namespace std;
static int cnt =0;
static int cnt1=0;
class Distance {
    private:
        int mts;
        int cms;
    public:
        Distance(){
            mts=0;
            cms=0;
            cnt++;
            cout<<"constructor is called "<<cnt<<" times "<<endl;
        }
        ~Distance(){
            cnt1++;
            cout<<"destructor is called "<<cnt1<<" times "<<endl;
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
    Distance di1,di2,di3;
    di1.get_data();
    di2.get_data();
    di3.cal_distance(di1,di2);
    // cout<<"content of di1: "<<endl;
    // di1.display();
    // cout<<"content of di2: "<<endl;
    // di2.display();
    // cout<<"content of di3: "<<endl;
    // di3.display();
    return (0);

}