#include <unistd.h>

int main(void)
{
    const char *message = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
    ssize_t written_bytes = write(2, message, 59);  // 59 is the length of the message

    if (written_bytes == -1) {
        return 1;
    }

    return 0;
}

