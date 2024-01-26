#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error using the write
 * system call.
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
    const char *message = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
    ssize_t written_bytes;

    written_bytes = write(2, message, 59);  /* 59 is the length of the message */

    if (written_bytes != 59)
    {
        return 1;
    }

    return 0;
}

