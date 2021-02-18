//============================================================================
// Name        : char-array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char texts[] = "MohitRajendraTalele" ;
	string name[] = {"Mohit", "Rajendra" ,"Talele" } ;

	cout << "Size of the string array " << sizeof(name) << endl ;
	cout << "Size of the char array " << sizeof(texts) << endl ;
	cout << "Size of the char element " << sizeof(texts[0]) << endl ;
	for(int i =0 ; i < sizeof(texts)/sizeof(texts[0]) ; i++){
		cout << i << ":" << texts[i] << endl;
	}
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
