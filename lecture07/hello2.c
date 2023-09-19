#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t fr = fork();
    if ( fr == 0 )
        printf("I am a child!\n");
    else
        printf("I am a parent!\n");
}
