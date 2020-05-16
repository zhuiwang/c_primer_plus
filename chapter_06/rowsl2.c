#include <stdio.h>

#define ROWS 6
#define CHARS 10

int main(int argc, const char *argv[])
{
    int row;
    char ch;
    for (int row = 0; row < ROWS; row++) {
        for ( ch = ('A' + row); ch < ('A' +ROWS); ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
