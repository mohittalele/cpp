//============================================================================
// Name        : vectors.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

// Going through the vector is done by iterator,
//which gives the pointer to the first element in the
//vector. Loop throught the vector by ptr++ till the
//vector end
int main() {
	vector <string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");
	cout << strings.size() << endl ;
	strings.pop_back();
	strings.push_back("next");
	vector <string>::iterator ptr = strings.begin() ;
	for ( ptr= strings.begin(); ptr < strings.end() ; ptr ++){
		cout << *ptr << endl ;
	}
	ptr = ptr+2 ;
	cout << "communication " <<*ptr << endl ;


	int myarray[]={1,2,3,4,5} ;

	return 0;
}
