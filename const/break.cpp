
int main(void) {

	const int c = 3;
	int* p = new int;								std::cout << p << " " << *p << std::endl;
	*p = 5; p = (int*)&c; *p = 7;					std::cout << p << " " << *p << " " << c << std::endl;

	return 0;
}