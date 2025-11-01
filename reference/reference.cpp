
int main(void) {

	int  i = 2;
	int& r = i;						std::cout << i << " " << r << " " << &i << " " << &r << std::endl;
	r = 3;							std::cout << i << " " << r << " " << &i << " " << &r << std::endl;
	i = 7;							std::cout << i << " " << r << " " << &i << " " << &r << std::endl;

	return 0;
}
