#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int A[100000];

    int freq[100000] = {0};

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        freq[A[i]]++;
    }
    int x = 0;

    for (int i = 0; i < 1000001; i++)
    {
        if (freq[i] == 1)
        {
            x++;
        }
    }

    printf("%d", x);

    return 0;
}