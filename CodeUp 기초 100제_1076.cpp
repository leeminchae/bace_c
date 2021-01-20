#include <stdio.h>

int main(void)
{
    char a;
    int n = 97;
    scanf("%c", &a);
    do
    {
        printf("%c ", (char)n);
        n += 1;
    }
    while (n<=(int)a);
}
