#include <stdio.h>

#include <stdbool.h>

int main(int argc, const char *argv[])
{
    unsigned long num;
    unsigned long div;

    bool isPrime;
    printf("Please enter an integer for analysis;\n");
    printf("Enter q to quite.\n");

    while (scanf("%lu", &num) == 1) {
        for (div = 2, isPrime = true; (div * div) <= num; div++) {
            if ((div*div)!=num) {
                printf("%lu is divisible by %lu and %lu.\n", num, div, num/div);
            }
            else {
                printf("%lu is divisible by %lu.\n", num, div);
            }
            isPrime = false;
        }
        if (isPrime) {
            printf("%lu is prime.\n", num);
        }
        printf("Please enter another integer for analysis;\n");
        printf("Enter q to quit.\n");
    }
    return 0;
}
