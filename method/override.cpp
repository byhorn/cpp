
class Base {
public:
	virtual void display(void) { std::cout << "Base display" << std::endl; }
};

class Derive: public Base {
public:
	void display(void) override { std::cout << "Derive display" << std::endl; }
};

int main(void) {

	Derive o;
	o.display();

	Base b = o;
	b.display();

	return 0;
}
