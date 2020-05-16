#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n = 3;
    while (n) {
        printf("%2d is true\n", n--);
    }
    printf("%2d is false\n", n);
    return 0;
}
