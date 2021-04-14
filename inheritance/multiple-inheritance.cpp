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
        string getName(){return name ;}
        int getAge(){return age ;}
        void setName(string n){ name = n ;}
        void setAge(int a){ age = a ;}
};

class Parents{
    private :
        string education ;
    public:
        Parents(){ cout << "Parents :: default constructor" << endl ;}
        Parents(string e): education{e} 
        {
            cout << "Parents ::  custom contructor" << endl ;
        }
        void printEducation(){
            cout << " Education :" << education << endl ; 
        }

};

class Children : public Parents , public Grandparents{
    private:
        string city ;
    public: 
        Children(){cout << "Children :: default constructor" << endl ;}
        Children(string new_name, int new_age): Grandparents(new_name,new_age)
        {
            cout << "Children :: cutstom constructor \n\n" << endl ;
        }  
        Children(string c ) : city(c) {}
        Children(string new_name, int new_age, string e): 
         Parents(e), Grandparents(new_name,new_age)
        {
            cout << "Children :: cutstom constructor \n\n" << endl ;
        } 
        void printInfo(){
            Parents::printEducation() ;
            Grandparents::printAge() ;
        }

};


int main() {
   // Children mohit ;

    
    Children vivek{"Bhusawal"} ; // the Children(string. int) contructor do not specify which superclass constructor to call hence the default constructor will be called.

    cout << endl ;

    Children keshavi("keshavi", 4, " MD ") ;
       cout << endl ;
    Children mohit("Hannover") ;
       cout << endl ;
     mohit.printInfo() ;
      cout << endl ;   
    keshavi.printAge(); // method from Grandparents
    keshavi.printEducation(); // method from Parents 
    return 0 ;
}