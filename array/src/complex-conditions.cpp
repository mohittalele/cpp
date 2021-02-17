//============================================================================
// Name        : complex-conditions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int values[3] ;
	values[0] = 23 ;

	for (int i = 0 ; i < 3 ; i++){
		cout << &values[i] << endl ;
	}

	// wont give  an error
	// developer needs to make sure the index is valid
	cout<< values[10] << endl ;

	double numbers[4] = { 4,2,3,4.5} ;
	return 0;
}
