
class Class {

public:
	static int count;
	static void increment(void) {
		Class::count++;
	}
};

int Class::count = 3;

int main(void) {

	Class::increment();
	Class::increment();
	std::cout << Class::count << std::endl;

	return 0;
}
