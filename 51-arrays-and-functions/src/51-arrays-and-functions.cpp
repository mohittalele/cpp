//============================================================================
// Name        : 51-arrays-and-functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//  Pass a array as a parameter.
void show1(string texts[], int nEle) {
	//cout << sizeof(texts) << endl ; // This returns size of the pointer not array !
	for(int i =0 ; i<nEle ; i++){
		cout << texts[i] << endl ;
	}
}

void show2(string (&texts)[3]){
	cout << sizeof(texts) <<endl ;
	for (int i =0 ; i < sizeof(texts)/sizeof(string); i++ ){
		cout << texts [i] << " " << flush;
	}
	cout << endl ;
}

void show3(string* ptext, int nEle){
	for(int i =0 ; i < nEle ; i++){
		cout << ptext[i] << " " << flush ;
	}
	cout << endl ;
	cout << "using pointer" << endl ;
	cout << sizeof((*ptext)) << endl ; // do not rerun the size of the pointer

}
//return a array from a function.

string* getArray(){
	string count[] = {"one", "two","three"} ;
	// returning a pointer to local variable not a good idea. Istead use "new" operator.
	return count ;
}
int main() {

	string texts []	=  {"apple", "orange", "banana"} ;
	cout << sizeof((texts)) << endl ; // retunrs the size of array
	show1(texts, 3);
	cout << "show2" <<endl ;
	show2(texts);
	cout << "show3" <<endl ;
	show3(texts,3);
	cout << "return array" <<endl ;
	string* pArray = getArray();  // functions return a pointer to local variables.
	// This is not good because that variable memory is freed when it goes out of scope in getArray.
	cout << *pArray << endl;

	return 0;
}
