#include <stdio.h>

int main()
{

    int X;

    while (scanf("%d", &X) != EOF)
    {
        if (X == 1999)
        {
            printf("CORRECT");
            break;
        }
        else
            printf("WRONG\n");
    }

    return 0;
}