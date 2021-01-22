#include <stdio.h>

int main(void)
{
    int n;
    int a[24] = {0};
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int k;
        scanf("%d", &k);
        a[k] += 1;
    }
    for (int i=0;i<24;i++)
    {
        if(a[i]!=0)
        {
            printf("%d", i);
            break;
        }
    }
}
