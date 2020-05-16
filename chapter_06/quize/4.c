#include <stdio.h>

int main(int argc, const char *argv[])
{
    char lest[27]="ABCDEFGHIJKLMNOPQRSTU";
    int k=0;
    for (int i = 0; i < 6; i++) {
        for (int j = 1; j < i+2; j++) {
            printf("%c", lest[k]);
            k = k+1;
        }
        printf("\n");
    }
    return 0;
}
