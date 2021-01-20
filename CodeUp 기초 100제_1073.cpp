#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    while(a!=0)
    {
        scanf("%d", &a);
        if (a!=0)
            printf("%d\n", a);
    }
}
