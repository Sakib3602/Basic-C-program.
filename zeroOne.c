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

    int zero = 0, one = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            zero += 1;
        }
        else if (A[i] == 0)
        {
            one += 1;
        }
    }
    printf("%d %d", one, zero);

    return 0;
}