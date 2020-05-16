#include <stdio.h>

int main(int argc, const char *argv[])
{
    /*
     *double num = 3278.3241;
     */
    float num;

    printf("Enter a floating-point: ");
    scanf("%f", &num);

    printf("fixed-point notation:  %lf\n", num);
    printf("exponential notation:  %e\n", num);
    printf("p  notation:  %a\n", num);
    return 0;
}
