#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("foo.txt", O_CREAT | O_RDWR);
    char buf[1024];
    int bytesread = read(fd, buf, 3);
    printf("Read %d bytes\n", bytesread);
    int byteswritten = write(fd, "purrrr", 6);
    printf("Wrote %d bytes\n", byteswritten);
    close(fd);
}