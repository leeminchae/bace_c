#include <stdio.h>

int main(void)
{
    int w,h, n;
    scanf("%d %d", &w, &h);
    int a[100][100] = {0};
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
        int l,d,x,y;
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d==0)
        {
            for (int i=0; i<l; i++)
            {
                a[x-1][y+i-1] = 1;
            }
        }
        else
        {
            for (int i=0; i<l; i++)
            {
                a[x+i-1][y-1] = 1;
            }
        }
    }
    for (int i=0;i<w;i++)
    {
        for (int j=0;j<h;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
