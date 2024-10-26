#include <cmath>

template <typename T>
T absoluteValue(T value) {
	return value < 0 ? -value : value;
}

template <> // Specialized template function for absolute value of double
double absoluteValue(double value) {
	std::cout << "Specialized function for double type" << std::endl;
	return fabs(value); // Use fabs for double precision
}

int main(void) {

	int intVal = -42;
	double doubleVal = -3.14;

	cout << "Absolute value of int: " << absoluteValue(intVal) << endl;
	cout << "Absolute value of double: " << absoluteValue(doubleVal) << endl;

	return 0;
}
