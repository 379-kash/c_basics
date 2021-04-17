//**************************senario with copy constructure********************************//

// #include<iostream> 
// #include<cstring> 
// using namespace std; 

// class String 
// { 
// private: 
// 	char *s; 
// 	int size; 
// public: 
// 	String(const char *str = NULL); // constructor 
// 	~String() { delete [] s; }// destructor 
// 	String(const String&); // copy constructor 
// 	void print() { cout << s << endl; } // Function to print string 
// 	void change(const char *); // Function to change 
// }; 

// String::String(const char *str) 
// { 
// 	size = strlen(str); 
// 	s = new char[size+1]; 
// 	strcpy(s, str); 
// } 

// void String::change(const char *str) 
// { 
// 	delete [] s; 
// 	size = strlen(str); 
// 	s = new char[size+1]; 
// 	strcpy(s, str); 
// } 

// String::String(const String& old_str) 
// { 
// 	size = old_str.size; 
// 	s = new char[size+1]; 
// 	strcpy(s, old_str.s); 
// } 

// int main() 
// { 
// 	String str1("kashyap"); 
// 	String str2 = str1; 

// 	str1.print(); // what is printed ? 
// 	str2.print(); 

// 	str2.change("vandan"); 

// 	str1.print(); // what is printed now ? //if the default constucture is not being provided then
//     //it will creat shallow copy and both of the objects will share same address... :0

// 	str2.print(); 
// 	return 0; 
// } 



//*******************************senario without copy constructure***************************//

#include<iostream> 
#include<cstring> 
using namespace std; 

class String 
{ 
private: 
	char *s; 
	int size; 
public: 
	String(const char *str = NULL); // constructor 
	~String() { delete [] s; }// destructor 
	// String(const String&); // copy constructor 
	void print() { cout << s << endl; } // Function to print string 
	void change(const char *); // Function to change 
}; 

String::String(const char *str) 
{ 
	size = strlen(str); 
	s = new char[size+1]; 
	strcpy(s, str); 
} 

void String::change(const char *str) 
{ 
	delete [] s; 
	size = strlen(str); 
	s = new char[size+1]; 
	strcpy(s, str); 
} 

// String::String(const String& old_str) 
// { 
// 	size = old_str.size; 
// 	s = new char[size+1]; 
// 	strcpy(s, old_str.s); 
// } 

int main() 
{ 
	String str1("kashyap"); 
	String str2 = str1; 

	str1.print(); // what is printed ? 
	str2.print(); 

	str2.change("vandan"); 

	str1.print(); // what is printed now ? //if the default constucture is not being provided then
    //it will creat shallow copy and both of the objects will share same address... :0

	str2.print(); 
	return 0; 
} 