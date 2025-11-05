
class Class {

public:
    const int constant = 1;
    const int
private:
    int integer;
    const char * character;
public:
    void setData(int i) { integer =  i; }
    void setCharacter(const char * c) { character = c; }
    void method(void) {   }
};

int main(void) {

    Class c;
    c.setData(2);
    c.setCharacter("hello world");
    c.method();

    return 0;
}
