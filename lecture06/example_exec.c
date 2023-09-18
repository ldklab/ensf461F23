#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
    char* args[2];
    args[0] = argv[1];
    args[1] = NULL;

    printf("About to execute the following command: %s\n", argv[1]);

    int execve_ret_val = execve(argv[1], args, NULL);
    if ( execve_ret_val == -1 ) {
        printf("Error: command execution failed!\n");
        return -1;
    }

    return 0;
}
