
template <typename T>
T absoluteValue(T value) {
	return value < 0 ? -value : value;
}

template <>
double absoluteValue(double value) { std::cout << "specialized function for double type" << std::endl;
	return value < 0 ? -value : value;
}

template <>
std::string absoluteValue(std::string value) { std::cout << value << std::endl;
	return value;
}

int main(void) {

	int i = -42;
	double d = -3.14;
	std::string ss = "hello world";

	std::cout << absoluteValue(i) << std::endl;
	std::cout << absoluteValue(d) << std::endl;
	std::cout << absoluteValue(ss) << std::endl;

	return 0;
}
