// Book Theory Reference 8.3.2 

class Base{
    protected:
        int value ;
    public:
        Base(int val=8): value{val} {}
};

class Derived: public Base {
    public:
        int change(Derived d){
            return d.value ; // Accessible
            // "A Derived class can access a base class's protected member only for objectes of its own type" - Bjarne
        }
        int change1(Base b){
            return b.value ; // Not accessible. Compile Error !!!
            // "A Derived class can access a base class's protected member only for objectes of its own type" - Bjarne
        }

};

