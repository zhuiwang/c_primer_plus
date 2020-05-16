#include <stdio.h>
#define PI 3.141493

int main(int argc, const char *argv[])
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);

    printf("Farewell! through art too dear for my possessing,\n");
    printf("%c%d\n",'$', 2*cost);

    printf("Only %d %% \n", cost);
    return 0;
}
