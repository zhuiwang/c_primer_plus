#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a = 65;
    int c;
    c = a + 32;
    printf("%c\n", a);
    printf("%c\n", c);
    printf("%c\n", '\a');
    printf("%c\n", '\v');
    printf("%c\n", '\t');
    printf("%c\n", '\\');
    printf("Gramps sez, \"a \\ is a blackslash.\"\n");
    return 0;
}
