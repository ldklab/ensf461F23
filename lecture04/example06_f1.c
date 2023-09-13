#include <stdio.h>
#include "example06_f2.h"

int main(int argc, char** argv) {

    int val = multiply_by_42(argc);
    printf("Value: %d\n", val);

    return 0;
}