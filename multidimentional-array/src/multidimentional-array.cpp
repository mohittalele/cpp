//============================================================================
// Name        : multidimentional-array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// array of array
	int animals[2][3] = {
			{ 1 ,2,3 } ,
			{4,5,6}
	};

	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cout << animals[i][j] << endl ;
		}
	}


	// size fo operator
	int values[] = { 2 , 5, 6, 8} ;
	cout << sizeof(values) << endl ;

	for(int i = 0 ; i < sizeof(values)/sizeof(int) ; i++){
		cout << values[i] << "   " << flush ;
	}

	for(int i = 0 ; i < sizeof(animals)/ sizeof(animals[0]) ; i++){
		for(int j = 0 ; j < sizeof(animals[0])/ sizeof(int)  ; j++){
			cout << animals[i][j] << endl ;
		}
	}


	return 0;
}
