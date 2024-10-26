#include <stdio.h>
int main()
{
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int count = 0;
    if (X < Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }

    printf("%d  : %d\n", X, Y);

    for (int i = 0; i < N; i++)
    {
        // 8 4
        if (A[i] <= X && A[i] >= Y)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}