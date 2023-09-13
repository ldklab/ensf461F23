// Preprocessor: example of include
#include <stdio.h>
#include <stdlib.h>

// Preprocessor: example of "constant"
#define TRUE 1
#define FALSE 0

// Preprocessor: example of macro
#define min(a,b) (a < b ? a : b)

int main(int argc, char** argv) {

    // Note: the two lines below are very bad code
    // and you should never write code like this
    int val1 = atoi(argv[1]);
    int val2 = atoi(argv[2]);

    int val3 = min(val1, val2);
    printf("min(%d, %d) is %d\n", val1, val2, val3);

    return 0;
}