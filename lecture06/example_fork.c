#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc, char** argv) {
    int numchildren = atoi(argv[1]);

    for (int i = 0; i < numchildren; i++) {
        pid_t fork_ret_val = fork();
        pid_t my_pid = getpid();
        if ( fork_ret_val == 0 ) {
            printf("I am a child! Fork returned %u, my PID is %u\n",
              fork_ret_val, my_pid);
            return 0;
        } else {
            printf("I am the parent! Fork returned %u, my PID is %u\n",
              fork_ret_val, my_pid);
        }      
    }

    return 0;
}