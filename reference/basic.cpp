#include <iostream>

int main() {

    int v = 3;
    int *p = &v;
    int &r = v;
    std::cout << v << " " << p << " " << r << std::endl;

    return 0;
}