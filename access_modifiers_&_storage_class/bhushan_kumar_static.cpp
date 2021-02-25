#include <iostream>
using namespace std;
class TestStatic
{
private:
static int StaticVariable;
/* It does not define the static member; only declaration is provided here */
int NonStaticVariable;
public:
void InitializeVariables(int Stat, int NonStat)
{
StaticVariable = Stat;
NonStaticVariable = NonStat;
}
void DisplayVariables()
{
cout << "Static member’s value is" << StaticVariable << "\n";
cout << "Non-static member’s value is" << NonStaticVariable << "\n";
}
};
int TestStatic::StaticVariable;
/* Defining the static member */
int main()
{
TestStatic TS1;
TestStatic TS2;
TS1.InitializeVariables(5,5);
TS1.DisplayVariables();
TS2.InitializeVariables(10,10);
TS2.DisplayVariables();
// Let us again see what are the values for T1
TS1.DisplayVariables();
}
