#include <stdio.h>
int main()
{
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);

    int A[N][M];
    int freq[1000] = {0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
            freq[A[i][j]]++;
        }
    }
    // ---------------
    int w[X];
    for (int i = 0; i < X; i++)
    {
        scanf("%d", &w[i]);
    }
    for (int i = 0; i < X; i++)
    {
        printf("%d\n", freq[w[i]]);
    }

    // --------------

    return 0;
}