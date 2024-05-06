
struct Struct {

};

class Class
{
public:
    int member;

    Class()
    {
        std::cout << "Class Constructor" << std::endl;
        this->member = 3;
    };

    Class(int value) : member(value)
};

int main() {
    Struct s;
    Class c;
    Class* p1;
    Class* p2 = new Class();
    return 0;
}