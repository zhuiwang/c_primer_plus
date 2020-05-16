#include <stdio.h>

int main(int argc, const char *argv[])
{
    float g,h;

    float tax, rate;

    rate = 0.08;
    g = 1.0e5;
    tax = rate*g;
    h = g + tax;

    printf("You own $%f plus $%f in taxes for a total of $%f\n", g, tax ,h);
    return 0;
}
