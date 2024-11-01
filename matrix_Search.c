#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[N][M];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j][i]);
        }
    }

    int X;
    scanf("%d", &X);

    int c = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[j][i] == X)
            {
                c++;
            }
        }
    }

    if ( c > 0)
    {
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    

    return 0;
}