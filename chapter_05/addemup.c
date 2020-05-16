#include <stdio.h>
int main(int argc, const char *argv[])
{
    int count, sum;
    count = 0;
    sum = 0;
    /*
     *mines count < 20 ? and count++
     */
    while (count++ < 20) {
        sum = sum + count;
        printf("sum = %d, count = %d\n", sum, count);
    }

    int guests = 0;
    while (guests++ < 10) {
        printf("%d\n", guests);
    }
    int x = 0, y = 0;
    y = (4 + x++) + (6 + x++);
    printf("%d\n", y);
    return 0;


}
