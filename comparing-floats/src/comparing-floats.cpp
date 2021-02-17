//============================================================================
// Name        : comparing-floats.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	float value1 = 1.1 ;
	if(value1 == 1.1){
		cout << "equals" << endl ;
	}
	else{
		cout << "not equals" << endl ;
	}


	cout << setprecision(10) << value1 << endl ;

	// you should use the difference to check the equality of floats
	return 0;
}
