#include <iostream>
using namespace std;
void add(string s,int NumberOne = 100, int NumberTwo = 200)
{
cout << "Sum is " << NumberOne + NumberTwo << endl;
}
int main()
{
int Int1 = 5, Int2 = 7;
add("kashyap");
add(Int1);
add(Int1, Int2);
/* If we want to provide only the second argument, it will not work */
}
// The following will not work as expected
