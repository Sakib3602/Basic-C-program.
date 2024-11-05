#include <stdio.h>

void all(int n, int a)
{
    if (a > n)
    {
        return;
    }

    printf("%d\n", a);
    all(n, a + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a = 1;

    all(n, a);

    return 0;
}