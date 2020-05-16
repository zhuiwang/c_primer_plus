#include <stdio.h>


int main()
{
    char ch;
    int n = 0;
    int res_flag = 0;

    while (1) {
        ch = getchar();
        /*
         * remember thie char singn '' not ""
         */
        if (ch == '\n')
        {
            break;
        }
        else if (ch != ' ')
        {
            /*
             * if last time char is not a ' ' need to reset num, and set res_flag to 1 ,for next char or ' '
             */
            if (res_flag == 0)
            {
                res_flag = 1;
                n = 0;

            }
            n++;
        }
        else
        {
            /*
             * if ther is a ' ' open the reset res_flag
             */
            res_flag = 0;
        }

    }
    printf("%d", n);
    /*
     * remember return to the system
     */
    return 0;
}
