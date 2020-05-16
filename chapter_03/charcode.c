#include <stdio.h>

int main(int argc, const char *argv[])
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %cis %d\n", ch, ch);

    return 0;
}
