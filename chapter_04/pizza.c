#include <stdio.h>

#define PI 3.1415926
#define RA radius


int main(int argc, const char *argv[])
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");

    scanf("%f", &radius);

    area = PI * radius * RA;
    circum = 2.0 * PI * RA;

    printf("Your basic pizza parameter are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
    return 0;
}
