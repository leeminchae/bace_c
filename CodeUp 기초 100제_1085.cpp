#include <stdio.h>

int main(void)
{
    long long int h, b, c, s;
    double result=0;
    scanf("%Ld %Ld %Ld %Ld", &h, &b, &c, &s);
    result = (double)(h*b*c*s) / 8;
    result /= (1024*1024);
    printf("%.1lf MB", result);
}
