#include <stdio.h>

int main()
{

    int X;

    while (scanf("%d", &X) != EOF)
    {
        if (X == 1999)
        {
            printf("Correct");
            break;
        }
        else
            printf("Wrong\n");
    }

    return 0;
}