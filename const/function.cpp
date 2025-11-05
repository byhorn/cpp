
class Class {
public:
    int getValue(void) const { return this->value; }
    void setValue(int v) { this->value = v; };
private:
    int value;
};


int main(void) {

    Class obj;
    obj.setValue(4);
    std::cout << obj.getValue() << std::endl;

    return 0;
}
