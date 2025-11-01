
class Class {
private:
	int i;
public:
	Class(void) { this->i = 3; std::cout << this->i << " Class()" << std::endl; };
	Class(int i) : i(i) { std::cout << "Class(" << this->i << ") Constructor" << std::endl; }
};

int main(void) {


	Class c; std::cout << "hello" << std::endl;

	Class* p1;
	Class* p2 = new Class;
	Class* p3 = new Class();

	Class* p4 = new Class(4);

	return 0;
}
