#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int X;
    scanf("%d", &X);

    for (int i = 0; i < N; i++)
    {
        if (i + 1 == X)
        {
            if (A[i] == 0)
            {
                A[i] = 1;
            }
            else if (A[i] == 1)
            {
                A[i] = 0;
            }
        }

        printf("%d ", A[i]);
    }

    return 0;
}