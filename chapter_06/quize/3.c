#include <stdio.h>

int main(int argc, const char *argv[])
{
    for (int i = 'F'; i > ('F' - 6); i--) {
        for (int j = 'F' ; j > ( i - 1); j--) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
