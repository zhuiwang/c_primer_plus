#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n = 5;
    while(n++ < 7)
    {
        printf("n = %d\n", n);
        printf("Noew n = %d \n", n);
    }

    printf("The loop has finished\n");
    return 0;
}