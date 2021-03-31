// overloading operators example
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle() : radius{4} {
        cout << "default construcotr is called" << endl ;
        } ;
    Circle(double r) : radius(r) { }
    double area() {return radius*radius*3.14159265;}
};

class CVector {
     Circle myCircle ;
  public:
    int x,y;
    CVector () {}; // if the memeber object is not initialised after : therefore default construcotr will be called
    CVector (int a,int b) : myCircle{10.4}, x{a}, y{b} {}
    CVector operator + (const CVector&);
};

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}

int main () {
  CVector foo {3,1};
  CVector bar {1,2};
  CVector result;
  result = foo + bar;
  cout << result.x << ',' << result.y << '\n';
  return 0;
}

