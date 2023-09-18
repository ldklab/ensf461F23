#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    char buffer[1024];
    char* args[2];
    args[1] = NULL;
    char newline;

    printf("Welcome to the shell! Enter commands, enter 'quit' to exit\n");
    do {
        printf("$ ");
        scanf("%s", buffer);
        scanf("%c", &newline);
        if ( strcmp(buffer, "quit") == 0 ) {
            printf("Bye!!\n");
            return 0;
        }
        else {
            pid_t forkV = fork();
            if ( forkV == 0 ) {
                args[0] = buffer;
                execve(buffer, args, NULL);
            } else
                wait(NULL);
        }
    } while ( 1 );

    return 0;
}
