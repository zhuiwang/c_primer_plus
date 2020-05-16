#include <stdio.h>

int main(int argc, const char *argv[])
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed   ");
    printf("q to quit:\n");

/*
 *    status = scanf("%ld", &num);
 *
 *    while (status == 1) {
 *        sum = sum + num;
 *        printf("Please enter next integer (q to quite):\n");
 *        status = scanf("%ld", &num);
 *    }
 */
    while (scanf("%ld", &num) == 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quite):\n");
        status = scanf("%ld", &num);

    }
    printf("Those integer sum to %ld\n", sum);
    return 0;
    }
