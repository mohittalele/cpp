//============================================================================
// Name        : StructAndPadding.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


// members of the struct is public by default.
// stringer type only a variable which stores a pointer.
// C++ pads struct to make it more efficient to transfer
// them from and to the memory

#include <iostream>
#include <fstream>
using namespace std;

//to remove pading

// to end padingwj
// this struct has padding of 4 byte
 #pragma pack(push,1);
struct Person{
	char name[40];  // 50 bites
	int age;		// 4 bite
	double weight ; // 8 byte
};
 #pragma  pack(pop,1);
int main() {
	cout << sizeof(Person) << endl;
	string filename = "test.bin";
	Person one = {"Mohit",200,65};
	ofstream outputfile ;
//	'/' IS BITWISE OR OPERATOR
	outputfile.open(filename, ios::binary);
	cout << &one << endl;
	cout << reinterpret_cast<char *>(&one) << endl ;
	if(outputfile.is_open()){
		outputfile.write(reinterpret_cast<char *>(&one),sizeof(one));
		outputfile.close();
	}
	else{
		cout << " could not create " << filename << endl;
	}
	return 0;
}

















