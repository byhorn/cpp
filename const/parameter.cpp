
class Class {
public:
    void print(const int& v) const {
        std::cout << v << std::endl;
    }
};

int main(void) {

    Class c;
    c.print(3);

    return 0;
}
