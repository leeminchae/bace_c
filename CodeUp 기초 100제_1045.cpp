#include <stdio.h>

int main(void)
{
    unsigned int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2f", (float)a/(float)b);
}
