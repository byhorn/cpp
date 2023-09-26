
int main() {

    int integer = 3;
    
    const int * const constant = &integer;

    *constant = 7;
    constant = &integer;

    return 0;
}
