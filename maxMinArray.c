#include <stdio.h>
#include <limits.h>
int main()
{

    int x;
    scanf("%d", &x);

    int a[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX, max = INT_MIN;

    for (int i = 0; i < x; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
        }
        else if (max < a[i])
        {
            max = a[i];
        }
    }

    printf("min is %d \n max is %d\n", min, max);

    return 0;
}