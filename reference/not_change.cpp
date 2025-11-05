
int main(void) {

	int x = 3;
	int y = 5;

	int& r = x;							std::cout << r << " " << x << " " << y << std::endl;
	r = y;								std::cout << r << " " << x << " " << y << std::endl;

	return 0;
}