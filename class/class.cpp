
class Class {
public:
    Class(bool one, int two) : pro{one}, perty{two} { char string[] = "Class constructor" }

    void method() {
        bool boolean = pro;
        int integer = perty;    
    }

private:
    bool pro;
    int perty;
};

int main() {

    Class c = Class(true, 31);
    c.method();

    return 0;
}