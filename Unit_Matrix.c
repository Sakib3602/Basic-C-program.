#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int A[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int flag = 1;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                if (A[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (A[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0) break;
    }
    if(flag == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}