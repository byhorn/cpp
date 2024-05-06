#include <iostream>

int main() {

    int a = 3;
    int b = 5;

    int * ptr = &a;
    *ptr = 1;
    ptr = &b;
    *ptr = 2;

    std::cout << a << " " << b << std::endl;

    return 0;
}