#include <stdio.h>

int main(void)
{
    int n, x ,y;
    int a[19][19] = {};
    for (int i=0; i<19; i++)
        for (int j=0;j<19;j++)
            scanf("%d", &a[i][j]);
            
    scanf("%d", &n);
    while(n!=0)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for (int i=0;i<19;i++)
        {
            if (a[x-1][i]==0)
                a[x-1][i]=1;
            else
                a[x-1][i]=0;
        }
        for (int j=0;j<19;j++)
        {
            if (a[j][y-1]==0)
                a[j][y-1]=1;
            else
                a[j][y-1]=0;
        }        
        n--;
    }
    for (int i=0;i<19;i++)
    {
        for (int j=0;j<19;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
