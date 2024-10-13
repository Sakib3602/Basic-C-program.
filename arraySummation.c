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

    long long sum = 0;
     long long f;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }
    if (sum < 0)
    {
        f = sum * (-1); 
        printf("%lld", f);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}