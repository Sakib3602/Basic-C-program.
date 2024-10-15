#include <stdio.h>
int main()
{

    int X;
    scanf("%d", &X);

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < i; j++)
        {

            printf("*");
        }
        printf("\n");
    }

    return 0;
}