#include <stdio.h>

int main(void)
{
    int n;
    int a[10000] = {0};
    scanf("%d", &n);
    for (int i=n-1; i>=0; i--)
    {
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    
    
}
