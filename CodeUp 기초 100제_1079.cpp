#include <stdio.h>

int main(void)
{
    char a;
    do
    {
        scanf("%c", &a);
        printf("%c", a);
    }
    while (a!='q');
}
