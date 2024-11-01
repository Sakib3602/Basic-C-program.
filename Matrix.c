#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int A[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[j][i]);
        }
    }

    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                primary += A[i][j];
            }
            if ((i + j) == (N - 1))
            {
                secondary += A[i][j];
            }
        }
    }

 
    int diff = 0;

    if (primary > secondary)
    {
        diff = primary - secondary;
        printf("%d", diff);
    }
    else if (primary < secondary)
    {
        diff = secondary - primary;
        printf("%d", diff);
    }
    else
    {
        printf("%d", diff);
    }

    return 0;
}