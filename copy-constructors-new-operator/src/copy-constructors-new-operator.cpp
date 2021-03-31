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
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Animal pet = Animal("Cat", 25) ;
	pet.speak();

	// this causes problem of shallow copy. We want deep copy
	// To implement deep copy, the default shallow copy contructor 
	// is overritten (Normally)
	Animal dog = pet ; // By default the copy constructor will be called.

	//dog.setProperties("Tommy", 100);

	dog.speak();
	pet.speak();
	// Another method to copy object.
	//Animal pig(pet) ;

	// e.g free up the heap
	Animal *mypet = new Animal("Cow", 29);
	delete mypet ; // if we missed this line then there will be memory leak

	return 0;
}
