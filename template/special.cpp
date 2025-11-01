
template <typename T>
T absoluteValue(T value) {
	return value < 0 ? -value : value;
}

template <> // Specialized template function for absolute value of double
double absoluteValue(double value) {
	std::cout << "specialized function for double type" << std::endl;
	return value < 0 ? -value : value;
}

int main(void) {

	int intVal = -42;
	double doubleVal = -3.14;

	std::cout << absoluteValue(-42) << std::endl;
	std::cout << absoluteValue(-3.14) << std::endl;

	return 0;
}
