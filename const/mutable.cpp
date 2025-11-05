
class Class {
private:
    mutable int i;
public:
	void set(int i) const { this->i = i; }
    void increment(void) const { this->i++; }
	void print(void) const { std::cout << this->i << std::endl; }
};

int main(void) {

	Class c;
	c.set(3);
	c.increment();
	c.print();

	return 0;
}