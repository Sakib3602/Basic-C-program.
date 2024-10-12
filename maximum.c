#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    int maxi = 0;

    for (int i = 1; i <= N; i++)
    {
        int fog;
        scanf("%d",&fog);

        if (fog > maxi)
        {
            maxi = fog;
        }
    }
    printf("%d",maxi);

    return 0;
}