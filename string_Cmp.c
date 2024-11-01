#include <stdio.h>
#include <string.h>

int main()
{
    char X[20], Y[20];
    scanf("%s", X);
    scanf("%s", Y);

    int a = strcmp(X, Y);

    if (a < 0)
    {
        printf("%s", X);
    }
    else if (a > 0)
    {
        printf("%s", Y);
    }
    else if(a == 0)
    {
        printf("%s", X);
    }

    return 0;
}