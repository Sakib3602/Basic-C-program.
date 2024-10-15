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

    int min = 0;
    for (int i = 0; i < N; i++)
    {
        if (min < A[i])
        {
            min = A[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        A[i] = min - A[i];

        printf("%d ", A[i]);
    }

    return 0;
}