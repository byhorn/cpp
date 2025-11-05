
struct Struct {
	int value;
	explicit Struct(int v) : value(v) { std::cout << "Struct()" << std::endl; }
	void print(void) { std::cout << this->value << std::endl; }
};

int main(void) {

	Struct s(3); // explicit conversion
	s.print();

	return 0;
}
