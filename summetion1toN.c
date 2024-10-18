#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    printf("%lld", sum);

    return 0;
}