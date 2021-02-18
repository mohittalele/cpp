//============================================================================
// Name        : string-stream.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string name = "Bob" ;
	int age = 24 ;
	stringstream ss ;


	ss << "Name is " ;
	ss << name ;
	ss << " age is " ;
	ss << age ;

	cout << ss.str() << endl ;
	return 0;
}
