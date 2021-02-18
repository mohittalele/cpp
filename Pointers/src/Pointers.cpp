//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pValue) {
	cout << "2. Value of double in manipulate: " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. Value of double in manipulate: " << *pValue << endl;
}
void changeString(string* pstring) {
	cout << "2. Value of double in change string: " << *pstring << endl;
	*pstring = "Yuga" ;
	cout << "3. Value of string in change string "  << *pstring << endl;
}
void changeValue(int &x) {
	// int y = 100;
	x = 178;
	cout << "2. changed values in changeValue " << &x << endl;
}
int main() {
	int value = 9 ;
	string name = "mohit" ;
	int* pvalue =  & value ;
	cout << value << endl ;
	cout << pvalue << endl;


	// int value using pointer
	cout << *pvalue << endl ;

	cout << "==================" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;

	cout << "1. Value of the string " << name << endl ;
	changeString(&name) ;
	cout << "4. Value fo the string " << name << endl ;


	// Pass by reference examples. This is equaivalent to the pointer example above
	int val = 10 ;
	cout << "1. adress values " << &val << endl;
	changeValue(val) ;
	cout << "3. changed values in changeValue " << val << endl;
	return 0;
}
