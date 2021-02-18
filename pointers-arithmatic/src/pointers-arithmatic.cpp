//============================================================================
// Name        : arithmatic-pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double value1 = 7/2   ;
	cout << value1 << endl;
	double value2 = (double)7/2 ;
	cout << value2 << endl;

	double value3 = 7/2   ;
	cout << value3 << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;

	// normally Const varibales are written in capital letters
	const int NSTRING = 5 ;
	string texts[NSTRING] = {"Mohit", "TU-Braunschweig", "Yuga","Nordstadt", "Bhusawal" } ;

	string* ptexts = texts ;
	cout << *ptexts << endl ;
	ptexts += 4 ;
	cout << *ptexts << endl ;
	ptexts = texts ;
	// compare pointers
	string *pEnd = & texts[NSTRING - 1 ] ;
	cout << *pEnd << endl ;
	while(ptexts <= pEnd){
		cout << *ptexts << "  "  <<flush ;
		ptexts++;
	}
	cout << endl ;
	ptexts = texts ;
	while(ptexts  <= pEnd){
		cout << ptexts << "  "  <<endl ;
		ptexts++;
	}
	// get the size of the array
	ptexts = texts ;
	cout << "Size of the array is " << pEnd - ptexts  << endl ;
	return 0;
}
