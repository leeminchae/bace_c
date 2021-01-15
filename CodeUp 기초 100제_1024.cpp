#include <stdio.h>

int main(void)
{
    char data[20] = "";
    scanf("%s", &data);
    for (int i=0;data[i]!='\0';i++)
    {
        printf("\'%c\'\n", data[i]);
    }
}
