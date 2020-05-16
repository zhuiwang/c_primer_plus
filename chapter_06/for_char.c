#include <stdio.h>

int main(int argc, const char *argv[])
{
    char ch;
    for (int ch = 0; ch < 'z'; ch++) {
        printf("The ASII value of %c is %d\n", ch, ch);
    }
    return 0;
}
