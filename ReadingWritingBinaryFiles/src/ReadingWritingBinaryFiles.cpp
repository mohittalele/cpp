//============================================================================
// Name        : ReadingWritingBinaryFiles.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//It is important to open the file and close the file.
//Ans each time the reading and writing the file make sure to
//check the file is open or not otherwise you will have undefined behaviour
#include <iostream>
#include <fstream>
using namespace std;

# pragma pack(push,1);
struct Person{
	string name; // 32 byte
	int age ; // 4 byte
	double height; // 8 byte
};
# pragma pack(pop,1);

int main() {
	Person one = {"Mohit", 28,163.78};
	string name = "Mohit";
	string filename = "test.bin";
	ofstream file ;
	file.open(filename,ios::binary);

	if(file.is_open()){
		file.write(reinterpret_cast<char *>(&one),sizeof(one));
		file.close();
	}

	Person two;
	ifstream file2 ;
	file2.open(filename,ios::binary);
	if(file2.is_open()){
		file2.read(reinterpret_cast<char *>(&two),sizeof(one));
		file2.close();
	}
	cout << two.name << endl;
	cout << two.height << endl ;
	cout << sizeof(name) << endl;
	cout << sizeof(two) << endl ;
	cout << sizeof(one) << endl; // prints !!!Hello World!!!
	return 0;
}
