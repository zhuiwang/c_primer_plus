#include <stdio.h>

#include <ctype.h>

int main(int argc, const char *argv[])
{
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            putchar(ch + 1);
        }
        else{
            putchar(ch);
        }

    }
    putchar(ch);
    return 0;
}
