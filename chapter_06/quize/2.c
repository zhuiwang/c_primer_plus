#include <stdio.h>


int main(int argc, const char *argv[])
{
    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
