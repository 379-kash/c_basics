#include<iostream>
using namespace std;
class Distance
{
    private:
        int mts;
        int cms;
    public:
        Distance ( ) {
            mts=0;cms=0;
            }
        void GetData( );
        void Display( );
        Distance(int a,int b):mts(a),cms(b){}
        Distance  operator --(int){
            mts--;
            if(mts>=0){
                cout<<"new distande is"<<mts<<endl;
                cms+=100;
            }
            else
            mts++;

            return Distance(mts,cms);
        }
        Distance operator= (const Distance &d1){
            mts=d1.mts;
            cms=d1.cms;
            return Distance(mts,cms);
        }
        void display(){
            cout<<mts<<endl<<cms<<endl;
        }
};

void Distance::GetData( )
{
    cout <<"\nEnter Distance in mts:";
    cin >>mts;
    cout <<"Enter Distance in cms:";
    cin >> cms;
}
void Distance::Display( ){
    while(cms>=100){
        mts++; cms-=100;
    }
    cout <<"Meters:"<<mts<<"\t Centimeters:"<<cms<<endl;
}
int main( ){
    Distance dist1, dist2,dist3;
    dist1.GetData( );
    dist1--;
    dist1.display();
    dist3=dist1--;
    dist3.display();
    return 0;
}
