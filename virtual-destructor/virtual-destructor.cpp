#include <iostream>
#include <vector>

using namespace std ;

class Base{
    private:
        int cost ; 
    public :
        Base(int c = 5):cost{c}{ cout <<"Allocate " << cost << " Rs in Base" << endl ; };
         virtual ~Base(){cout <<"Deallocate " << cost << " Rs in base " << endl ;}
        int getCost(){ return cost;} 
};

class Derived: public Base{
    public:
        Derived(){cout << "Allocate " << Base::getCost()*4 << " Rs in Derived" << endl ;}
        Derived(int c): Base(c){ cout << "Allocate " << c*4 << " Rs in Derived" << endl ;}
         ~Derived(){cout <<"Deallocate " << Base::getCost()*4  << " Rs in derived" << endl; } ;
};

class DDerived: public Derived{
    public:
        DDerived(){cout << "Allocate " << Derived::Base::getCost()*6 << " Rs in DDerived" << endl ;}
        DDerived(int c): Derived(c){ cout << "Allocate " << c*6 << " Rs in DDerived" << endl ;}
        ~DDerived(){cout <<"Deallocate " << Base::getCost()*6  << " Rs in DDerived" << endl; } ;
};
int main(){
    Base *bptr = new DDerived(10) ;

    delete bptr ;


    return 0 ;
}
