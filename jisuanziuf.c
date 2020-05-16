#include <stdio.h>
#include <string.h>

int main()
{
    char a[5000];
    char b;
    int upper_lower = 0;
    /*
     *scanf("%s", a);
     *printf("%s", a);
     *printf("b=");
     *fflush(stdin);
     *scanf("%c",&b);
     */
    scanf("%[^\n] %c", a, &b);
    int num = strlen(a);
    int str = 0;

    if (b <='z'&&b >='a')
        upper_lower = -32;
    if (b <='Z'&&b >='A')
        upper_lower = 32;

    for (int i=0; i<num; i++)
    {
        if (a[i]==b || a[i]==b+upper_lower)
            str++;
    }
    printf("%d",str);
}
