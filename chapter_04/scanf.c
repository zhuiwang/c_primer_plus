#include <stdio.h>
int main(int argc, const char *argv[])
{
    char input;
    /*
     *scanf("%c", &input);
     *scanf(" %c", &input); is different
     */
    scanf("%c", &input);
    /*
     *here is a blank before %c
     */
    scanf(" %c", &input);
    printf("%c\n", input);
    return 0;
}
