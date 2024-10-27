#include <iostream>

extern int ei;

void print(void) {
	std::cout << ei << std::endl;
}

int main(void) {

	print();

	return 0;
}