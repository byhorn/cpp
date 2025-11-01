
class Struct {
	int i;
	Struct(int i) { this->i = i; }
};

int main(void) {

	// Struct * p = new Struct; 	std::cout << p->i << std::endl;

	Struct * c = new Struct(3);			std::cout << c->i << std::endl;

	return 0;
}
