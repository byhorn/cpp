
template <typename U, typename V>
class Pair {
public:
	U first;
	V second;
	Pair(U first, V second) : first(first), second(second) {}
	void display(void) const {
		std::cout << first << " " << second << std::endl;
	}
};

int main(void) {

	Pair<int, double> p(5, 4.5); p.display();
	Pair<std::string, char> q("hello", 'a'); q.display();

	return 0;
}
