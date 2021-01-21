#include <stdio.h>

int main(void)
{
    int w, h, b;
    double result=0;
    scanf("%d %d %d", &w, &h, &b);
    result = (double)(w*h*b) / 8;
    result /= (1024*1024);
    printf("%.2lf MB", result);
}
