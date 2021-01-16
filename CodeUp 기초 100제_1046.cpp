#include <stdio.h>

int main(void)
{
    long long int a, b, c;
    scanf("%Ld %Ld %Ld", &a, &b, &c);
    printf("%Ld\n", a+b+c);
    printf("%.1f", (float)(a+b+c)/3.0);
}
