
class Class {
public:
	int i;
	Class(int i) { this->i = i; }
};

int main(void) {

	Class * p = new Class;
	Class * q = new Class(3);
	std::cout << p->i << std::endl;
	std::cout << q->i << std::endl;

	return 0;
}