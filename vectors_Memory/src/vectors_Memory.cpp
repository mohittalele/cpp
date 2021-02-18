//============================================================================
// Name        : vectors&Memory.cpp
// Author      : mohit
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


// The vector has the size() which is actual number of elements
//in the vector. Vector stores the element in the internal array
//the size of this internal array is given by the capacity() method.
//The compiler automatically increases the capacity in anticipation
//of the increse in the size. The increase in the capacity is normally
//exponential


// Resize method increases the size of the vector but the capacity
//remains the same
// Reserve() method increases the capacity while size remains the same.
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<double> numbers(20,1.0);
	cout << numbers.size() << endl ;
	cout << numbers.capacity() << endl ;
	numbers.push_back(3.0);
	unsigned int capacity = numbers.capacity();
	cout << numbers.capacity() << endl ;
	for (int i = 0 ; i < 10000  ; i++){
		if(capacity != numbers.capacity()){
			capacity = numbers.capacity();
			cout << numbers.capacity() << endl;
		}
		numbers.push_back(i*1.0);
	}
//	numbers.reserve(40000);
	numbers.resize(50);
	cout << numbers.size() << endl ;
	cout << numbers.capacity() << endl ;

	vector <string> *mystring = new vector<string> ;
	delete mystring ; // call this to deallocate the memory. otherwise memory leak.
	return 0;
}
