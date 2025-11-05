#include <iostream>

extern int ei;

void stdcout(void) {
	std::cout << ei << std::endl;
}

int main(void) {

	stdcout();

	return 0;
}
