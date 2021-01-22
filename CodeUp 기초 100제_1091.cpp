#include <stdio.h>

int main(void)
{
	long long int a, m, d, n;
	scanf("%Ld %Ld %Ld %Ld", &a, &m, &d, &n);
	for (int i=1; i<n; i++)
	{
		a = a*m+d;
	}
	printf("%Ld", a);
}
