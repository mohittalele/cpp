//============================================================================
// Name        : variables.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World - GM!!!" << endl; // prints !!!Hello World!!!
	for(int i = 0 ; i < 10 ; i++){
		cout << i << endl ;
		cout << &i << endl ;

	}
	// why ues ling ?
	int x = 1246789446651223 ;
	cout << x << endl ;

	// scope of varovles is in {}
	long int y = 1246789446651223 ;
	cout << y << endl ;
	cout << &y << endl ;
	{
		long int y = 9999999999999999 ;
		cout << y << endl ;
		cout << &y << endl ;
 	}

	cout << y << endl ;
	cout << &y << endl ;


	// precious  long double > double > float

	cout << sizeof(float) << endl ;
	cout << sizeof(double) << endl ;
	cout << sizeof(long double) << endl ;
	return 0;
}
