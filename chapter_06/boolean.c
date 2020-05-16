#include <stdio.h>

int main(int argc, const char *argv[])
{
    long num;
    long sum = 0L;
    _Bool input_is_good;
    printf("Please enter an integer to be summed    ");
    printf("(q to quite): ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good) {
        sum = sum + num;
        printf("Please enter next integer (q to quit):  \n");
        input_is_good = (scanf("%ld", &num) == 1);
    }

    printf("Those integer sum to %ld\n", sum);
    return 0;
}
