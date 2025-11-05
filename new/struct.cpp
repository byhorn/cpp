
struct Struct {
	int i;
	Struct(int i) { this->i = i; }
};

int main(void) {

	Struct * s = new Struct(3);

	std::cout << s->i << std::endl;

	return 0;
}
