#include <stdio.h>
#include <unistd.h>

int main() {
    int mypid = getpid();

    printf("I am a process! My pid is %d\n", mypid);

    return 0;
}