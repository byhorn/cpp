
class MyClass {
    int x;        // private by default
    void func();  // private by default
public:
    int y;        // explicitly public
};

class Base { };
class Derived : Base { };  // private inheritance
