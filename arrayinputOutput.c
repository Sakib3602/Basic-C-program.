#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);
    int a[x];
    int sum = 0;

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < x; i++)
    {
        sum += a[i];
    }
    double avg = (double) sum / x;
    printf("sum is : %d\n avg is : %0.2lf", sum, avg);

    return 0;
}