
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int odd = 0, even = 0, posi = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {

        int x;
        scanf("%d", &x);

        if (x % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }

        if (x > 0)
        {
            posi++;
        }
        else if (x < 0)
        {
            neg++;
        }
    }

    printf("Even : %d \n odd : %d \n positive : %d \n negative : %d \n", even, odd, posi, neg);

    return 0;
}