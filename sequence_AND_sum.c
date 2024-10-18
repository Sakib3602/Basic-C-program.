#include <stdio.h>
int main()
{

    int M, N;
    while (scanf("%d %d", &M, &N) != EOF)
    {
        if(M <= 0 || N <=0){
            break;
        }
        if (M > N)
        {
            int v = N;
            N = M;
            M = v;
        }
        int sum = 0;

        for (int i = M; i <= N; i++)
        {
            sum += i;

            printf("%d ", i);
        }
        printf("sum =%d\n",sum);

        // --------------- while loop end
    }

    return 0;
}