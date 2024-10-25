
int main(void) {

    int i = 3;
    
    const int * const c = &i;

    *c = 7; // error
    c = &i; // error

    return 0;
}
