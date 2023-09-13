#include <unistd.h>
#include <string.h>

int main() {
    char inputbuf[1024];
    ssize_t bytesread;

    bytesread = read(0, inputbuf, sizeof(inputbuf));
    if ( bytesread < 1 )
        return -1;

    write(1, inputbuf, strlen(inputbuf)-1);
    return 0;
}