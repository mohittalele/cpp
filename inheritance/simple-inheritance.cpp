# include <iostream> 
using namespace std ;

class Polygon{
    private:
        double width, height ;
    public:
        Polygon() { } 
        Polygon(double w, double h): width(w) , height(h) {}
        virtual double getArea() { 
            return 1230 ;
        }
        double getWidth(){
            return this->width ;
        }
        double getHeight(){
            return height ;
        }
        void printer(){
            cout << "dummy printer" << endl ;
        }
};

class Rectangle: public Polygon{
    public:
    // Unless otherwise specified the default constructor of 
    // the base class will be called.
        Rectangle(double w , double h): Polygon(w,h) {}
        double getArea(){
            Polygon::printer() ;
            return getHeight() * getWidth() ;
        }
};

class Triangle: public Polygon{
    public:
        Triangle(double w , double h): Polygon(w,h) {}
        double getArea(){
            return getWidth() * getHeight() / 2 ;
        }
};


int main(){
    Polygon * r1 = NULL ;
    Polygon * t1 = NULL ;
    Triangle t(10.0,11.0) ;
    Rectangle r(10.0, 11.0) ;
    r1 = &r ;
    t1 = &t ;
    cout << "0" << endl ;
    cout << " Area of the Polygon r1 is :: " << r1->getArea() << endl ;
    cout << " Area of the Polygon T1 is :: " << t1->getArea()<< endl ;
    return 0 ;
}