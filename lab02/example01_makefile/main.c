#include <stdio.h>
#include "util.h"

int main(int argc, char** argv) {
    printf("%d divided by three is %d\n", argc,
      divide_by_three(argc));

    return 0;
}