#include <stdio.h>

int main(void)
{
    int a;
    int sum=0;
    scanf("%d", &a);
    for (int i=1; i<=1000; i++)
    {
    	sum += i;
    	if (sum >= a)
    	{
    		printf("%d", i);
    		break;
		}
	}
}
