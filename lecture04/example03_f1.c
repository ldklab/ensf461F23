#include <stdio.h>

unsigned pow2(unsigned val);

int main() {
    unsigned rez = pow2(3);
    printf("2^3 is %u\n", rez);
    return 0;
}