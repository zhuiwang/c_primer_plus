#include <stdio.h>

int main(int argc, const char *argv[])
{
    char ch[26];
    int i;
    for (int c = 'a', i = 0; c < ('a' + 26); c++, i++) {
        ch[i] = c;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c", ch[i]);
    }
    return 0;
}
