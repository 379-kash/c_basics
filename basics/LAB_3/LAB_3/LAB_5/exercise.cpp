#include<iostream>
using namespace std;
class Distance
{
private:
int mts;
int cms;
public:
Distance ( ) {
 mts=0;cms=0;}
 void GetData( );
 void Display( );
 void  operator --(int){
    mts--;
    if(mts>=0){
        cout<<mts<<endl;
        cms+=100;
    }
    else
    mts++;
 }
  void operator= (const Distance &d1){
     mts=d1.mts;
     cms=d1.cms;
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
void Distance::Display( )
{
while(cms>=100)
{
mts++; cms-=100;
}
cout <<"Meters:"<<mts<<"\t Centimeters:"<<cms<<endl;
}
int main( )
{
Distance dist1, dist2,dist3;
dist1.GetData( );
// dist2.GetData( );
// cout<<dist1--<<endl;
// cout <<"Content of dist1 = ";
// dist1.Display( );
// cout <<"Content of dist2 = ";
// dist2.Display( );
dist1--;
dist3=dist1--;
dist1.display();
return 0;
}