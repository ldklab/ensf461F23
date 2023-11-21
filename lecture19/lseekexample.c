#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    char buf[1024];
    int fd = open("foo2.txt", O_CREAT | O_RDONLY);
    
    off_t offset = lseek(fd, 0, SEEK_CUR);
    printf("I am now at position %ld in the file\n", offset);
    int bytesread = read(fd, buf, 1024);
    buf[bytesread] = '\0';
    printf("Here's what I read: %s\n", buf);

    offset = lseek(fd, 5, SEEK_SET);

    printf("I am now at position %ld in the file\n", offset);
    bytesread = read(fd, buf, 1024);
    buf[bytesread] = '\0';
    printf("Here's what I read: %s\n", buf);

    close(fd);
    return 0;
}