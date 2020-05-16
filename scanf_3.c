#include <stdio.h>
int main(void)
{
    char a[20];
    char i,j,k;
    /*
     *remember thier is no "," in scanf %%%%%
     */
    scanf("%[^\n] %c %c %c", a,&i,&j,&k);
    printf("%s\n%c\n%c\n%c\n", a,i,j,k);
}
