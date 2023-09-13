#include <unistd.h>
#include <string.h>

int main() {
    // Preparing the messages
    const char* out = "Hello, ENSF461!\n";
    const ssize_t out_l = strlen(out);
    const char* err = "Error, ENSF461!\n";
    const ssize_t err_l = strlen(err);

    // Let's write to the standard output
    write(1, out, out_l);

    // Let's write to the standard error
    write(2, err, err_l);
    
    return 0;
}
