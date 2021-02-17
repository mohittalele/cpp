//============================================================================
// Name        : copy-constructors.cpp
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
	int age ;
public:
	Animal(){
		cout << "Animal created " << endl ;
	}
	Animal(string name, int age ){
		this->age = age ;
		this->name = name ;
	}
	~Animal(){
		cout << " destructor is called for " << this->name << endl;
	}
	// Override default Copy constructors. This wall be called any time the Animal myObject = someAnimalObject
	Animal(const Animal &other){
		// only const methjod of the other object can be called.
		cout << " Copy Constructors is called" << endl;
	}
	void setProperties(string name, int age){
		this->age=age;
		this->name= name;
	}
	void speak() const{
		cout << "My Name is " << name << " and age is : " << age << " .. "<< endl ;
	}

};


int main() {
	char c = 'a' ;
	// due to asci style
	Animal *petArray = new Animal[26];
	for(int i = 0 ; i < 26 ; i++,c++){
		string name(4,c) ;
		petArray[i].setProperties(name, i);
	}


	delete[] petArray ;


}
