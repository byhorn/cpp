
namespace Namespace {
	void print(void);
}

void Namespace::print(void) { std::cout << "Namespace::print()" << std::endl; }

int main(void) {

	Namespace::print();

	return 0;
}