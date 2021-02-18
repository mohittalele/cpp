// Always Catch subclasses before any of its superclasses.

// The catching order of the exceptions is important.
// First the subclasses must be thrown and then the super class.
// E.g "bad_alloc" before its base class "exception". Otherwise
// through polymorphism the subclass's what() method is called
// through the reference of the superclass.

#include<iostream>
#include<exception>
using namespace std ;

class MyExceptions: public exception {
public :
	virtual const char* what(){
		return "Something is wrong" ;
	}
};


class Test {
public :
	void goeswrong() {
	bool error1 = false ;
	bool error2 = true ;
		if (error1){
			cout << "throwing exception" << endl;
			throw MyExceptions() ;
		}
		if (error2){
			cout << "throwing bad alloc" << endl;
			throw bad_alloc();
		}
	}

};


int main(){
	Test test ;

	try {
		test.goeswrong();
	}

	catch (exception &e){
		cout << e.what() << endl;
		cout << "catching exception" << endl ;
	}
	catch (bad_alloc &e){
		cout << e.what() << endl ;
		cout << "catching badalloc " << endl ;
	}

	return 0 ;
}
