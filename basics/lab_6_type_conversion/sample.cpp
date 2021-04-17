#include<iostream>
 using namespace std; 
 
class Time 
{ 
 	int hrs, mins, secs; 
     public:  
        Time( ){ 
            hrs = mins = secs = 0; 
            cout << "Default Constructor called."; 
        } 
        Time(int h, int m, int s) { 
            hrs = h; mins = m; secs = s; 
            cout << "Three argument Constructor called."; 
        } 
	    Time(int s) 	//One argument constructor to convert from basic to user defined type. 
        { 
            hrs = s / 3600; 
            s %= 3600; 
            mins = s / 60; 
            secs = s % 60; 
            cout << "One argument Constructor called."; 
        } 
        operator int( ) //Conversion function to convert from user defined to basic type. 
        { 
            int s = (hrs * 3600) + (mins * 60) + secs; 
            return s; 
        } 
        void getTime(); 
        void showTime(); 
}; 
void Time :: getTime() { 
    cout<<"Enter hours: ";
    cin >> hrs; 
    cout<<"Enter minutes: "; 	
    cin >> mins; 
    cout<<"Enter seconds: "; 	
    cin >> secs; 
} 

void Time :: showTime( ) { 
    cout << hrs <<  " : " << mins << " : " << secs << endl; 
} 
 
int main( ){ 
    Time t1 = 3800; 
    cout << "Time t1: "; t1.showTime( );
    Time t2(10, 20, 40); 
    cout << "Time t2: "; 
    t2.showTime( ); 
	int s = t2; 	//Implicit casting 
    int s = int(t2); //Explicit casting cout << "Time t2 in seconds:" << s; 
    return (0);
} 