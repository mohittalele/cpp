#include <iostream>
#include "Cat.h"

using namespace std ;
Cat::Cat()	{
	cout << "cat created" << endl ;

	happy = true ;
}

Cat::~Cat()	{
	cout << "cat destroyed" << endl;
}

void Cat::speak(){
	if(happy){
		cout << "meowww" << endl ;
	}

}
void Cat::jump(){
	cout << "i am jumping" << endl ;
}


