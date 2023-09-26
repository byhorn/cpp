#include <iostream>

int main() {

    int x = 3;
    int y = 5;

    int& r = x;
    r = y; // x = 5

    std::cout << r << std::endl;
    std::cout << x << " " << y << std::endl;

    return 0;
}