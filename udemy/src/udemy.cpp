#include<iostream>
#include<exception>
using namespace std ;

class MyExceptions: public exception {
public :
	virtual const char* what() const throw(){
		throw "Something is wrong" ;
	}
};


class Test {
public :
	void goeswrong() {
		throw MyExceptions();
	}
};


int main(){
	Test test ;

	try {
		test.goeswrong();
	}
	catch (MyExceptions &e){
		cout << e.what() << endl;
	}
	return 0 ;
}
