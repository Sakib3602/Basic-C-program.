#include <stdio.h>

void all(int n)
{
    if (n < 1)
    {
        return;
    }

    printf("%d", n);
     if (n > 1)
    {
        printf(" ");
    }
    all(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
  

    all(n);

    return 0;
}