#include <stdio.h>

int main()
{
    char c,d;
    while( (c=getchar()) != '\n' )
        printf("%c\n", c);

    d=getchar();
    printf("%c\n", d);
}
