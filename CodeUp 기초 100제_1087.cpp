#include <stdio.h>

int main(void)
{
    long long int n, sum=0;
    scanf("%Ld", &n);
    for (int i=1;;i++)
    {
        sum += i;
        if (sum>=n)
        {
        	printf("%d", sum);
            break;
        }
    }
}
