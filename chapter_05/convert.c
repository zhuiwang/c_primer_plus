#include <stdio.h>
int main(int argc, const char *argv[])
{
    char ch;
    int i;
    float fl;
    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = ch +1;
    i = fl + 2*ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i,fl);
    ch = 1107;
    printf("Now ch = %c\n", ch);
    ch = 80.89;
    printf("Now ch = %c\n", ch);

    ch = 1 + (int)82.3;
    printf("Now ch = %c\n", ch);
    return 0;
}