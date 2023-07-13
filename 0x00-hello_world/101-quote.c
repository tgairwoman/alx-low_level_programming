#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program writes a string to the standard error
 * Return: Always 0 (success)
 */
int main(void)
{char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(str) - 1;
ssize_t written = write(STDERR_FILENO, str, len);
if (written != len)
{
return (1);
}
return (0);
}
