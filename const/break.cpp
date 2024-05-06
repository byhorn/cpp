#include <iostream>

int main() {

    const int constant = 3;

    int* pointer = new int;

    *pointer = 5;
    pointer = (int*)&constant;

    *pointer = 7;

    std::cout << *pointer << std::endl;

    return 0;
}