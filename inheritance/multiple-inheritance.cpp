# include <iostream>
using namespace std ;

class Grandparents{
    private:
        string name ; 
        int age ;
    public :
        Grandparents(){cout << "Grandparents :: default construct" << endl ;}
        Grandparents(string Newname, int Newage) : name{Newname}, age{Newage} 
        {
            cout << "Grandparents ::  custom contructor" << endl ;
        } 
        void printAge(){
            cout << " age :" << age << endl ; 
        }
};

class Parents{
    private:
        string name ; 
        int age ;
    public:
        Parents(){ cout << "Parents :: default constructor" << endl ;}
        Parents(string new_name, int new_age): name{new_name}, age{new_age} 
        {
            cout << "Parents ::  custom contructor" << endl ;
        }
        void printName(){
            cout << " name :" << name << endl ; 
        }

};

class Children : public Parents , public Grandparents{
    private:
        string name ;
        int age ;
    public: 
        Children(){cout << "Children :: default constructor" << endl ;}
        Children(string new_name, int new_age): name{new_name}, age{new_age}
        {
            cout << "Children :: cutstom constructor \n\n" << endl ;
        }  
        Children(string new_name, int new_age, int birth_year): 
        name{new_name}, age{new_age}, Parents(new_name,new_age), Grandparents(new_name,new_age)
        {
            cout << "Children :: cutstom constructor \n\n" << endl ;
        } 

};


int main() {
   // Children mohit ;

    
    Children vivek{"vivek", 35} ; // the Children(string. int) contructor do not specify which superclass constructor to call hence the default constructor will be called.


    Children keshavi("keshavi", 4, 2019) ;
    keshavi.printAge(); // method from Grandparents
    keshavi.printName(); // method from Parents 
    return 0 ;
}