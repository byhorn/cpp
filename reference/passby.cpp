
void value(int v) { v++; }
void pointer(int * p) { (*p)++; }
void reference(int & r) { r++; }

int main(void) {

	int i = 5;												std::cout << i << std::endl;
	value(i);												std::cout << i << std::endl;
	pointer(&i);											std::cout << i << std::endl;
	reference(i);											std::cout << i << std::endl;

	return 0;
}