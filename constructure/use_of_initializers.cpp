//*******************code given below***********************
//in this code it will simply create 2 object for the only dlc of e1  to 8
//for avlokaan purpose one constructure is already created 
// #include<iostream>
// using namespace std;
// class Example{
//     public:
//         Example(){
//             cout<<"created entity"<<endl;

//         }
//         Example(int x){
//             cout<<"created entity with "<<x<<"woww!!!"<<endl;
//         }
// };
// class Entity{
//     Example e1;
//     public:
//         Entity()
//         {
//             e1=Example(8);
//         }

// };
// int main(){
//     Entity a1;

// }


//*******code given below*******************
//in this we have simply initialized with the help of initializer and look!!
//only one object is created
#include<iostream>
using namespace std;
class Example{
    public:
        Example(){
            cout<<"created entity"<<endl;

        }
        Example(int x){
            cout<<"created entity with "<<x<<"woww!!!"<<endl;
        }
};
class Entity{
    Example e1;
    public:
        Entity()
            :e1(Example(8))//or :e1(8)
        {
            // e1=Example(8);
        }

};
int main(){
    Entity a1;

}

//conclusion it will save memory for us at some times...