#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = INT_MAX;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < min)
        {

            min = A[i];
        }
    }

    int x = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % min)
        {
            x++;
        }
    }

    if (x % 2 != 0)
    {
        printf("Lucky");
    }
    else
        printf("Unlucky");

    return 0;
}