#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a>0)
        {
        printf("plus\n");
        if (a%2==1)
            printf("odd\n");
        else
            printf("even\n");
        }
        
    else
        {
            printf("minus\n");
            a = -a;
            if (a%2==1)
                printf("odd\n");
            else
                printf("even\n");
        }
}

