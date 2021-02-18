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

Animal createAnimal(){
	// Not oefficient way of returning the object. Two copies.
	Animal a = Animal();
	a.setProperties("duck", 17);
	return a ;
}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Animal myAnimal = createAnimal();
	myAnimal.speak();
	return 0;
}
