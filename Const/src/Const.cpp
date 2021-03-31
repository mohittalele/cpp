//============================================================================
// Name        : Const.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name ;
public:
	// But as soon as a class has some constructor taking any number of parameters explicitly declared, 
	// the compiler no longer provides an implicit default constructor, and no longer allows the declaration 
	// of new objects of that class without arguments. 
	Animal(string name){
		this->name = name;
	}
	void setName(string name){
		this->name = name ;
	}
	void speakName() const{
		cout << "Hello, I am " << name << endl ;
	}

};
int main() {

	// some refernce is Const
	// Cost variables usually capital letters. just a convention
	const double PI = 3.712 ;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Animal pet = Animal("Cat") ;
	pet.speakName();

	Animal * dog = &pet ;
	dog->speakName();
	dog->setName("tommy");
	pet.speakName();
	dog->speakName();

	// make the method a const
	// speak method is not changing the configuration of object then declare it as a const.

	int value = 8 ;
	int *  pvalue = & value ;
	int number = 17 ;

	pvalue = & number ; // error with this : int * const  pvalue = & value ; pointer is constant.
	*pvalue = 100 ; // error with this : const int * pvalue = & value ; value pinted to by pointer is constant .

	cout << "*pvalue : " << *pvalue << endl ;

	return 0;
}
