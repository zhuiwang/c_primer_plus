#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n;
    printf("Please enter three integers\n");
    scanf("%*d %*d %d", &n);
    printf("The last integers was %d\n", n);

    int val1=12, val2=234, val3= 1222;
    printf("%9d %9d %9d\n", val1, val2, val3);
    val1=12213;
    val2=22334;
    val3= 1222;
    printf("%9d %9d %9d\n", val1, val2, val3);
    return 0;
    }
