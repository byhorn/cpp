
struct Struct {

	int i = 3;
	void print(void) { std::cout << this->i << std::endl; }
};

int main(void) {

	Struct s;

	s.print();

	return 0;
}
