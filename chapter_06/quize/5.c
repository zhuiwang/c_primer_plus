#include <stdio.h>

int main(int argc, const char *argv[])
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < (4-i); j++) {
            printf(" ");
        }
        for (int k = 'A'; k < ('A'+ i) ; k++) {
            printf("%c", k);
        }
        for (int f = ('A' + i); f > ('A' - 1); f--) {
            printf("%c", f);
        }
        printf("\n");
    }
    return 0;
}
