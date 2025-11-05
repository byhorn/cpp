
int main(void) {

	int v = 3;
	int* p = &v;
	int& r = v;			std::cout << v << " " << p << " " << r << std::endl;

	int& rr;

	return 0;
}
