#include <stdio.h>

char *hello() {
    char message[32];
    char *m = message;

    scanf("%s", message);

    printf("From hello: %s\n", message);

    // If we return message, the compiler will warn us about using the stack
    // to return message; however, this won't warn us
    return m;
}

int main() {
    printf("From main: %s\n", hello());
}
