
class Class {
public:
	static int count;
};

int Class::count = 3;

int main(void) {

	std::cout << Class::count << std::endl;

	return 0;
}
