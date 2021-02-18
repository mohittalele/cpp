//============================================================================
// Name        : constructor-overloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1("Mohit",30)  ;
	cout <<  person1.toString()<< endl; // prints !!!Hello World!!!
	return 0;
}
