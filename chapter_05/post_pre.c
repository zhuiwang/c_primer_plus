#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++;
    pre_b = ++b;
    printf("a   a_post      b       pre_b \n");
    printf("%1d  %5d    %5d    %5d \n", a, a_post, b, pre_b);

    int num=1;
    while (num < 21) {
        printf("%10d %10d\n", num, num*num++);
    }

    a = 1;
    a = 6 + (b = 1);
    printf("%d, %d\n", a, b);
    return 0;
}
