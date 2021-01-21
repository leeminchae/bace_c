#include <stdio.h>

int main(void)
{
	long long int a, r, n, k=0;
	scanf("%Ld %Ld %Ld", &a, &r, &n);
	for (int i=0; i<n-1; i++)
	{
		a *= r;
	}
	printf("%Ld", a);
}
