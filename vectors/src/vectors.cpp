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
	{
		vector <string>::iterator ptr = strings.begin() ;
		for ( ptr= strings.begin(); ptr < strings.end() ; ptr ++){
		cout << *ptr  << "  ";
		}
	
	ptr = ptr-2 ;
	cout << *ptr << endl ;
	cout << "end -2 :: " <<*ptr << endl ;
	}
	//vector<int> *v = new vector<int>(2,3,5) ;
	vector<int> vec { 10, 20, 30 };

	// Method 1 : iterate throught the vector 
	for (vector<int>::iterator ptr = vec.begin() ; ptr < vec.end(); ptr ++){
		cout << *ptr << "  " ;
	}
	cout <<"\n" ;

	// method 2 : iterate over the vector 
	for (int v : vec){
		cout << v << "  " ;
	}
	cout << "\n" ;


	vector<int> *vec2 = new vector<int>{10,11,12,13,14,15};
		// Method 1 : iterate throught the vector 
	for (vector<int>::iterator ptr = (*vec2).begin() ; ptr < (*vec2).end(); ptr ++){
		cout << *ptr << "  " ;
	}
	cout <<"\n" ;

	// method 2 : iterate over the vector 
	for (int v : (*vec2)){
		cout << v << "  " ;
	}	cout <<"\n" ;
	delete vec2 ;
	return 0;
}
