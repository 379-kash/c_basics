//ReturnRef.cpp
#include <iostream>
using namespace std;
int main()
{

int FirstInt = 10, SecondInt = 20;
int ThirdInt, FourthInt = 100;
int& RetRefTest(int, int);
ThirdInt = RetRefTest(FirstInt, SecondInt);
// The following is a special use of returning as reference
RetRefTest(FirstInt, SecondInt) = FourthInt;
cout<<FourthInt<<endl;
}
int& RetRefTest(int i, int j)
{
return(i>j?i:j);
}
