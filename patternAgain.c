#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // ------------------------------- //

    for (int i = N - 1; i >= 1; i--)
    {

        for (int k = N - i; k > 0; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}