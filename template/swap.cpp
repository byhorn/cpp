
template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main(void) {

	int x = 5, y = 10;							std::cout << x << " " << y << std::endl;
	swap(x, y);									std::cout << x << " " << y << std::endl;

	double p = 3.14, q = 2.71;					std::cout << p << " " << q << std::endl;
	swap(p, q);									std::cout << p << " " << q << std::endl;

	return 0;
}
