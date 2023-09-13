#include <stdio.h>

int main(int argc, char** argv) {
  int i;
  printf("Number of arguments: %d\n", argc);
  for (i=0; i<argc; i++) 
    printf("Argument #%d: %s\n", i, argv[i]);
  return 0;
} 
