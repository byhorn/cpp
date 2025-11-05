struct Struct {

	static int value;

	void print(void) { std::cout << value << std::endl; }

	static void Print(void) { std::cout << value << std::endl; }
};

int Struct::value;

static void Print(Struct s) { std::cout << s.value << std::endl; }

int main(void) {

	Struct s1; s1.value = 3;
	Struct s2; s2.value = 4;

	Struct::value = 5;

	s1.print();
	s2.print();
	std::cout << Struct::value << std::endl;
	Struct::Print();

	return 0;
}
