//============================================================================
// Name        : Classes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {

	Cat cat ;

	Cat * mycat = new Cat();
	mycat->jump();




	// more neat remove the memory when it is filled
	{
		Cat neatCat ;
		neatCat.speak();

	} // neatCat destroyed
	cat.jump();
	return 0;
}	// cat will be destroyed when the compiler hit } at the }, however the mycat lives on.
