#include <stdio.h>
int main(int argc, const char *argv[])
{
    int i = 2147483646;

    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);
    return 0;
}
