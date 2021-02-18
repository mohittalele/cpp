//============================================================================
// Name        : references.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void doSomething (double& value){
	value = 123.4 ;
}

int main() {
	double value1 = 10 ;
	double &value2 = value1 ;
	// value 2 is just the another name of value1
	// value2 will act as a synomym for value1. value2 cannot hold any seperate value tahn value1
	value2 = 15 ;
	cout << "value1 " << value1	<< endl ;
	cout << "value2 " << value2 << endl ;

	value2 = 432.1 ;
	doSomething(value2) ;

	cout << "value1 " << value2 << endl ;

	return 0;
}
