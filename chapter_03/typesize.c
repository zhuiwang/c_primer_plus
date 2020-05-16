#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("Type int has a size of %zd Bytes.\n", sizeof(int));
    printf("Type char has a size of %zd Bytes. \n", sizeof(char));

    printf("Type long has a size of %zd Bytes. \n", sizeof(long));
    printf("Type long long has a size of %zd Bytes. \n", sizeof(long long));

    printf("Type double has a size of %zd Bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd Bytes.\n", sizeof(long double));

    return 0;
}
