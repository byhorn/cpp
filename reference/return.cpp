
int& reference(int& r) {
    return r;
}

int main(void) {

	int x = 5;
	int& y = reference(x);
	y = 20;												std::cout << x << std::endl;

	return 0;
}