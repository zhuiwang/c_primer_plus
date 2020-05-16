#include <stdio.h>

int power(int n, int p);
int main(int argc, const char *argv[])
{
    int n;
    int p;
    scanf("%d", &n);
    scanf("%d", &p);
    printf("%d\n", power(n,p));

    return 0;
}

int power(int n, int p){
    int pow = 1;
    for (int i = 0; i < p; i++) {
        pow *= n;
    }
    return pow;
}
