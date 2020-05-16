#include <stdio.h>

int main(int argc, const char *argv[])
{
    char ch;
    char word[20][10];
    int i=0;
    int j=0;
    int flag = 0;
    while (scanf("%c", &ch) == 1) {
/*
 *        if ( (ch>='A') && (ch <='z')) {
 *            word[i][j] = ch;
 *            i++;
 *            flag = 1;
 *        }
 *        else{
 *
 *        }
 */
        if (ch == '\n') {
            break;
        }
        else if (((ch>='A')&&(ch <='Z')) || ((ch>='a')&&(ch<='z'))) {
            if(flag ==0){
                flag = 1;
                printf("\n");
                i=0;
                j++;

            }
            printf("%c", ch);
            word[i][j]=ch;
        }
        else{
            flag = 0;
        }
    }

    return 0;
}
