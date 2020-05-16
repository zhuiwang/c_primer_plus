#include <stdio.h>

int main(int argc, const char *argv[])
{
    long second_year = 3.156e7;
    double second_live;
    int age;
    printf("Please input your age: \n");
    scanf("%d", &age);
    second_live = second_year * age;
    printf("Your live second is %e", second_live);
    return 0;
}
