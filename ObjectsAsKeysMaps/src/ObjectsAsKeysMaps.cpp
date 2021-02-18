//============================================================================
// Name        : ObjectsAsKeysMaps.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class person{
private:
	string name ;
	int age ;
public:
	person():
		name(""),age(10){
	}
	person(string name, int age):
		name(name),age(age){
	}
};
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
