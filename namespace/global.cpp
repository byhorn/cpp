
void function(void) {
    std::cout << "global function called" << std::endl;
}

class Class {
public:
    void function(void) { std::cout << "member function called" << std::endl; }
    void global_function(void) { ::function(); }  // calls the global function
    void member_function(void) { function(); } // calls the member function
};

int main(void) {
	
	function();
	::function();

	Class c;
	c.function();
	c.global_function();
	c.member_function();

    return 0;
}