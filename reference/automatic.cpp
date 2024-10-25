
int main(void) {

	int a = 2;
	int &r = a;		std::cout << a << " " << r << " " << &a << " " << &r << std::endl;
	r = 3;			std::cout << a << " " << r << " " << &a << " " << &r << std::endl;
	a = 7;			std::cout << a << " " << r << " " << &a << " " << &r << std::endl;

	return 0;
}
