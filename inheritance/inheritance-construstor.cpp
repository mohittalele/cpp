# include <iostream>

using namespace std ;

class Linux{
    public:
        Linux(){ cout << " Linux :: Default construct " << endl ;}
        Linux(int a ){ cout << " Linux :: custom construct " << endl ;}

};

class Ubuntu: public Linux{
    public:
    // Nothing specified about the base class constructor
    // Hence deualt constructor is called (one without parameter)
        Ubuntu() { cout << " Ubuntu ::  Default construct \n\n" << endl ;}      
} ;

class CentOS: public Linux {
    private:
        double version ;
    public:
        CentOS() { cout << " CentOS :: Defualt construct " << endl; }
        CentOS(int a ) : Linux(a), version(a/1.2) { 
            cout << " CentOS :: Custom construct " << endl ;
        } 
};

int main(){
    Ubuntu u ;
    CentOS c (10);
}