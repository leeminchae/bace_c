#include <stdio.h>

int main(void)
{
    char a;
    scanf("%c", &a);
    switch ((int)a)
    {
        case 'A':
            printf("best!!!");
            break;
        case 'B':
            printf("good!!");
            break;
        case 'C':
            printf("run!");
            break;
        case 'D':
            printf("slowly~");
            break;
        default:
            printf("what?");
    }
}
