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
    int position;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < min)
        {

            min = A[i];
            position = i + 1;
        }
    }

    printf("%d %d", min, position);

    return 0;
}