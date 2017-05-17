#include <stdio.h>

int main() {

    int x = 4;

    printf("x is stored at %p\n", &x);

    int *address_of_x = &x;

    printf("x is %i\n", *address_of_x);

    // let's change the value
    *address_of_x = 99;

    printf("x is now %i\n", x);

    return 0;
}
