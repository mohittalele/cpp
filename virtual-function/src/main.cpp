#include <iostream>



using namespace std ;
class Original{
	public:
		void makeNoise(){
			cout << " make noise in Original class" << endl ;
		}
};

class Base : public Original {
	public:
		// A virtual function is a member function 
		// which is declared within a base class and is re-defined(Overriden) by a derived class. 

		virtual void show () { 
			cout << " show base class " << endl ;
		}
		void print() {
			cout << " print base class " << endl ;
		}
		void speak(){
			cout << " Speak up in Base class" << endl ;
		}
}; 

class Derived : public Base {
	public:
		void show() {
			cout << " show derived class " << endl ;
		}
		void print() {
			cout << " print derived class " << endl ; 
		}
		void jump(){
			cout << " Jump up" << endl ;
		}
};	


int main(){
	Base * bptr = NULL ;
	Derived dclass ;
	bptr = &dclass ;
	bptr->print(); // print() is non virtual function hence compile type binding
	// show() is virtual function (in base class) hence runtime binding. concept: runtime polymorphism
	// show() will run the actual object's method
	bptr->show();
	bptr->speak();
	bptr->makeNoise();
	return 0 ;
}