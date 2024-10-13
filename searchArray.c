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

    int u = -1;

    for (int i = 0; i < N; i++)
    {

        if (A[i] == X)
        {
            u = i;
            break;
        }
    }

    printf("%d", u);

    return 0;
}