#include <stdio.h>

int main(int argc, const char *argv[])
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%.1e, %.1e, %.1e, %.1e\n", n1, n2, n3, n4);

    printf("%ld %ld\n", n3, n4);

    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
    return 0;
}
