/*
 * Person.cpp
 *
 *  Created on: 3 Feb 2021
 *      Author: mtalele
 */

#include <iostream>
#include "Person.h"


Person::Person() {
	// TODO Auto-generated constructor stub
	name =  "undefined" ;
	age = 0 ;
}

Person::Person(string myname, int Myage){
	name = myname ;
	age = Myage ;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

string Person::toString(){
	cout << "Name is : " << name << endl ;
	cout << "Age is : " << age << endl ;
}
