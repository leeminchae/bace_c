#include <stdio.h>

int main(void)
{
    int a;
    int sum=0;
    scanf("%d", &a);
    for (int i=0; i<=a; i+=2)
        sum += i;
    printf("%d", sum);
}
