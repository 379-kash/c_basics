#include <iostream>
using namespace std;
#include <string.h>
int main()
{
void PrintName(char* name, char* AnotherName);
void PrintConstName(char *const name, char* AnotherName);
char *MyName = "Lara";
char *HisName = "Ravan";
char *AnotherName = "Beckham";
PrintName(MyName,HisName);
cout << MyName << "\n";
PrintConstName(HisName,MyName);
cout << HisName << "\n";
return 0;
}
void PrintName(char *name, char *AnotherName)
{
name = AnotherName;
cout << "Changed name in function is" << name << "\n";
}
void PrintConstName(char *const name, char *AnotherName)
{
// name = AnotherName;
/* If this line is not indicated as a comment, the program will nbecause for this function, name is a constant pointer and its valaltered. */
cout << "Changed name in function is"<< name << "\n";
}
