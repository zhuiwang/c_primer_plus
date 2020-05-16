#include <stdio.h>

#define PAGE 959

int main(int argc, const char *argv[])
{

    printf("*%d*\n", PAGE);
    printf("*%2d*\n", PAGE);
    printf("*%10d*\n", PAGE);
    printf("*%-10d*\n", PAGE);
    return 0;
}
