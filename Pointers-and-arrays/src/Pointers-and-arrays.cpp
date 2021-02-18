//============================================================================
// Name        : Pointers-and-arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int text[] = {10,13,152} ;
	cout << "size of the array : " << sizeof(text)/sizeof(text[0]) <<endl ;
	cout << "size of the array : " << sizeof(text) << endl;

	int *ptext = text ;
	cout << "size of the pointer : " << sizeof(ptext) << endl;
	for(int itr = 0 ; itr < sizeof(text)/sizeof(text[0]); itr++, ptext++){
		cout << *ptext << "  " << flush ;
	}
	cout << endl ;

	// Method - 1
	// Iterate over the array using the pointers.
	// in c++ operator [] have higher precedence than &. Therefore &names[2] will give the pointer pointing
	// to names[2]

	string names[] = { "mohit" , "viviek", "yuga" ,"Living ","LU-Hannover"} ;

	string* pElement = names ;
	string* pEnd =  & names[sizeof(names)/sizeof(names[0])] ;

	// pstr < pEnd this statement is just the comparison of the two hexadecimal number hence the comparion is valid
	for(string* pstr = pElement ; pstr < pEnd ; pstr++){
		cout << *pstr << "  " << flush ;
	}
	cout << endl ;

	// Method - 2
	// Another way of iterating over the array by

	while(true){
		cout << *pElement << "  " << flush ;
		if ( pElement == pEnd) break ;
		pElement++ ;
	}
	cout << endl ;
	return 0;
}
