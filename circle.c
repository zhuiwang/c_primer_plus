#include <stdio.h>



void forcircle(void){
    int i;
    for(i=0; i<10; i++)
    {
        printf("This is for circle!\n");
    }
}

void whilecircle(void){
    int a;
    a=0;
    while(a<10)
    {
        printf("This is while circle!\n");
        /*
         *This is important
         */
        a++;
    }
}

void dowhile(void){
    int a;
    a=0;
    do
    {
        printf("This is do while circle!\n");
        /*
         *This is important
         */
        a++;
    }while(a<10);
}

int main(void)
{
    forcircle();
    whilecircle();
    dowhile();
}
