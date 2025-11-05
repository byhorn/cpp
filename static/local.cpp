
class Class {
public:
	static int increment(void) {
		static int count = 0;
		return ++count;
	}
};

int main(void) {

	Class::increment();
	Class::increment();
	Class::increment();
	std::cout << Class::increment() << std::endl;

	return 0;
}
