#include<iostream>
using namespace std;
class array{
    int *p,size;
    public:
        array(int sz){
            p=new int[sz];
            cout<<"constructor created array at"<<p<<endl;
            cout<<"pointer at"<<&p<<endl;
            size=sz;
        }
       
        ~array(){
            // cout<<"delete constructor"<<endl;
            delete [] p;
            }//line1
        // copy constructor
        array(const array &a){ //line2
            int i;
            p=new int[a.size];
            cout<<"copy constructor created array at "<<p<<endl;
            cout<<"pointer at"<<&p<<endl;
            for(i=0;i<a.size;i++){
                p[i]=a.p[i];
            }
        }
        void put(int i){
            if(i>=0 && i<size){
                cin>>p[i];
            }
        }
        int get(int i){
            return p[i];
        }
        int* getp(){
            return p;
        }
        static array Sort(array &A){
            array B=A;
            int o;
            for(int i=0;i<10-1;i++){
                for(int j=i+1;j<10;j++){
                    if(B.p[i]<=B.p[j]){
                        o=B.p[i];
                        B.p[i]=B.p[j];
                        B.p[j]=o;
                    }
                }
            }
            for(int i=0;i<10;i++){
                cout<<B.p[i]<<endl;
            }
            return B;
        }
             
};
int main(){
    array num(10);
    cout << "New object at " << &num << endl;
    int i;
    for(i=0; i<10; i++){
         num.put(i);
    }
    // for(i=0; i<10; i++) {
    //     cout << num.get(i);
    // }
    // cout << "\n";
    // create another array and initialize with num
    array x(num); // invokes copy constructor
    cout << "Another object at " << &x << " and array at " << x.getp() << endl;
    // for(i=0; i<10; i++){
    //      cout << x.get(i)<<endl;
    // }
    // cout << "\n";
    array j(array::Sort(num));

    return 0;
}
