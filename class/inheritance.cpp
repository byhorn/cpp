class Class
{
private:
    Class()   
    {
        std::cout << "Class Constructor" << std::endl;
    }
};

class SubClass : public Class
{
public:
    SubClass() 
    {
        std::cout << "SubClass Constructor" << std::endl;
    }
};

int main()
{
    Class c;
    SubClass s;

    return 0;
}