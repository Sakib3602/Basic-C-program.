#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("before insert :%d\n", a[i]);
    }

    int index, value;

    scanf("%d %d", &index, &value);

    n++;
    for (int i = n - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }

    a[index] = value;

    for (int i = 0; i < n; i++)
    {
        printf("after insert :%d\n", a[i]);
    }

    return 0;
}