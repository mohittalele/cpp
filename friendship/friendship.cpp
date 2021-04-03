#include <iostream>
using namespace std ;

class Square ;

class Rectangle {
    private: 
        int width, height ;
    public:
        int area() {
            return width * height ;
        }
        void conversion(Square a) ;
};

class Square {
    friend class Rectangle ; // Rectangle class can access the private attributes of the square
    private :
        int side ;
    public:
        Square(int a) : side(a) {}
};

void Rectangle::conversion(Square a){
    this->height = a.side ;
    this->width = a.side ;
}


int main(){
    Rectangle r ;
    Square sqr(16) ;
    r.conversion(sqr);
    cout << "Area of rectangle :: " << r.area() << endl ;
}