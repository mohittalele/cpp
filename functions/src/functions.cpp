//============================================================================
// Name        : functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// copy of the variable in due to function parameter
void printer(string myName = "Default Name"){
	cout << " in Printer function function " << ", value : " << myName << "  address "  << &myName << endl ;
	cout << myName << endl ;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	string myName = "mohit" ;
	cout << " in main function " << ", value : " << myName << "  address "  << &myName << endl ;
	printer(myName) ;
	printer() ;
	return 0;
}
