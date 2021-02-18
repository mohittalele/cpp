//============================================================================
// Name        : pointer-string-reverse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string wife = "YugandharaHariWankhede is crazy" ;
	char wife1[] = "YugandharaHariWankhede is crazy" ;
	int nElement = sizeof(wife1) / sizeof(wife1[0]) ;
	char* pWifeEnd = & wife1[nElement - 1] ;

	for (char *pp = pWifeEnd; pp >= wife1 ; pp--) {
		cout << *pp << " " << flush ;

	}
	cout << endl ;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
