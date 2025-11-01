
class Class {
private:
    bool pro;
    int perty;
public:
    Class(bool one, int two) : pro{one}, perty{two} { char string[] = "Class constructor"; }

    void method() {
        bool boolean = pro;
        int integer = perty;
    }
};

int main(void) {

    Class c = Class(true, 31);
    c.method();

    return 0;
}
