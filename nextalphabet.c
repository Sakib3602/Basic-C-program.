#include <stdio.h>
int main()
{

    // a-z = 97 - 122;

    char C;
    scanf("%c", &C);

    if (C == 'z')
    {
        printf("a");
    }
    else
    {

        char sum = C + 1;
        printf("%c", sum);
    }

    return 0;
}