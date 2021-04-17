#include <iostream>
#include <fstream>
#include <cstring>
#include<iomanip>
using namespace std;
    class Inventory {
        char name[20];
        int code;
        float cost;
        public:
            Inventory () { };
            Inventory(char *n, int cd,float ct){
            strcpy(name, n);
            code = cd;
            cost = ct;
            }
            void getdata() {
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter code:";
            cin>>code;
            cout<<"Enter cost:";
            cin>>cost;
            }
            void putdata() {
            cout<<setw(10)<<name<<endl;
            cout<<setw(10)<<code<<endl;
            cout<<setw(10)<<cost<<endl;
            }
};
int main( ) {
    Inventory item,item1;
    char c;
    fstream infile("kashyap.txt", ios::in | ios::out | ios::binary);
    do {
    cout << "1. Enter numbers\n";
    cout << "2. Display numbers\n";
    cout << "3. Modify\n";
    cout << "4. Quit\n";
    cout << "\nEnter a choice: ";
    cin >> c;
    switch(c) {
        case '1':
            item.getdata( );
            infile.write((char *)&item,sizeof(item));
            break;
        case '2':
            infile.seekg(0,ios::beg);
            while(infile.read((char *)&item1,sizeof(item1)))
            {
            item1.putdata( );
            }
            cout << endl;
            break;
        case '3':
            int i=0;
            break;
        case '4':
            infile.close( );
        }
    } while(c !='3');
    return 0;
    }