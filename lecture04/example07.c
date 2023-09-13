#include <stdio.h>

void value_or_reference(int val, int* ref) {
    val = 42;
    *ref = 42;
}

int main() {
    char myvec[4] = {'a', 'b', 'c', 'd'};

    printf("Position 0 of myvec is %c\n", myvec[0]);
    printf("Position 1 of myvec is %c\n", *(myvec+sizeof(char)));

    int byvalue = 2;
    int byref = 2;
    value_or_reference(byvalue, &byref);    

    printf("Variable passed by value: %d\n", byvalue);
    printf("Variable passed by references: %d\n", byref);

    return 0;
}