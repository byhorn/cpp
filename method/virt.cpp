
class Base {
public:
	virtual void show(void) {
		std::cout << "Base class show function called" << std::endl;;
	}
};

class Derived : public Base {
public:
    void show(void) override { std::cout << "Derived class show function called" << std::endl; }
};
