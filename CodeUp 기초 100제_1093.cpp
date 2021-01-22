#include <stdio.h>

int main(void)
{
    int n;
    int a[23]={0};
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        int k;
        scanf("%d", &k);
        a[k-1] += 1;
    }
    for (int i = 0; i<23; i++)
    {
        printf("%d ", a[i]);
    }
}
