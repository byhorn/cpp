
struct Struct {
	int value;
	Struct(int v) : value(v) { std::cout << "Struct()" << std::endl; }
	void print(void) { std::cout << this->value << std::endl; }
};

int main(void) {

	Struct e(3); 					e.print(); // explicit conversion
	Struct i = 42; 					i.print();// implicit conversion

	return 0;
}
