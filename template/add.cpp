
template <typename T>
T add(T a, T b) {
	return a + b;
}

int main(void) {

	int x = 5, y = 10;
	float a = 3.5, b = 2.5;

	std::cout << add(x, y) << std::endl;
	std::cout << add(a, b) << std::endl;

	return 0;
}
