#include <stdio.h>
#include <stdlib.h>
 
int main() {
     int x = 777;
     printf("location of code: %p\n", (void *) main);
     printf("location of heap: %p\n", (void *) malloc(1));
     printf("location of stack: %p\n", (void *) &x); 
     printf("location of printf: %p\n", (void *) printf);
     printf("location of malloc: %p\n", (void *) malloc);
     return 0;
}
