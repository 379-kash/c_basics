#include<iostream> 
using namespace std;
class Cube { 
    private: 
        float height; 
        float width; 
        float length; 
 
    public:   
    void SetData(float h, float w, float l)   { 
        height = h; 
        width = w; 
        length = l; 
} 
 
    void GetData( ) { 
        cout<<"Enter Height: "; 
        cin>>height; 
        cout<<"Enter Width: "; 
        cin>>width; 
        cout<<"Enter Length: "; 
        cin>>length; 
} 
 
    void ShowData( ) { 
        cout << "Dimensions of the objects are:\n"; 
        cout << "Height: "<<height<<",Width: "<<width<<", Length: "<<length ; 
} 
 
    void Volume( ) { 
        cout << "\nVolume of the cube is: " << height * width * length << endl; 
} 
}; 
int main( ) { 
    Cube c1; 
    c1.SetData(12.3, 23.4, 34.5); 
    cout << "Object c1: " <<endl; 
    c1.ShowData( ); 
    //cout << c1.height; 	//This statement will show error. Private data not accessible. c1.Volume( ); 
 
    Cube c2; 
    cout << "\nEnter the content of object c2: " << endl; c2.GetData( ); 
    cout << "Object c2: " << endl; c2.ShowData( ); 
        c2.Volume( ); 
    return 0; 
} 