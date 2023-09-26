#include <iostream>

void value(int val) { val++; }
void pointer(int * ptr) { (*ptr)++; }
void reference(int & ref) { ref++; }


int main() {

    int d = 5;
    value(d);
    pointer(&d);
    reference(d);
    std::cout << d << std::endl;

    return 0;
}