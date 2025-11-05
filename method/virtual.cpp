class Class {
public:
    virtual int get() { return 3; }
};

class SubClass : public Class {
private:
    int property;
public:
    SubClass(int value) : property(value) {}
    int get() override { return this->property; }
};


int main(void) {
    SubClass* s = new SubClass(4);
    Class* c = s;
    std::cout << c->get() << std::endl;
}