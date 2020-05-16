#include <stdio.h>

void scanf2();
int main(void)
{
    int i;
    scanf("%d", &i);
    printf("i = %d\n", i);

    int j,k;
    scanf("%d%d", &j, &k);
    printf("j = %d,k = %d\n", j,k);
    scanf2();
    return 0;
}

void scanf2()
{
    char i,j,k;
    scanf("%c%c%c", &i, &j, &k);
    printf("i=%c, j=%c, k=%c\n", i ,j ,k);
}

