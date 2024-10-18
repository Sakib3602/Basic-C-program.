#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    long long fac = 1;
    for (int i = 1; i <= N; i++)
    {
        int x;
        scanf("%d", &x);

        for(int j = 1; j <= x; j++){
             fac *= j;
        }
        
       
        printf("%lld\n", fac);
        fac = 1;
    }

    return 0;
}

