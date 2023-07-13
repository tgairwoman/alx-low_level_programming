#include <unistd.h>

int main(void)
{
    char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = sizeof(str) - 1;
    ssize_t written = write(2, str, len);
    if (written != len) {
        return 1;
    }
    return 1;
}
