#include <stdio.h>
int main()
{

    int A, B, C;
    char S, Q;

    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

    if (S == '+')
    {
        int x = A + B;

        if (C == x)
        {
            printf("Yes");
        }
        else
            printf("%d", x);
    }

   else if (S == '-')
    {
        int x = A - B;

        if (C == x)
        {
            printf("Yes");
        }
        else
            printf("%d", x);
    }

    else if (S == '*')
    {
        int x = A * B;

        if (C == x)
        {
            printf("Yes");
        }
        else
            printf("%d", x);
    }


    return 0;
}