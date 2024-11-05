#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int *ptr1 = &A;
    int *ptr2 = &B;

    if (A < B)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    int dif = *ptr1 - *ptr2;

    printf("%d", dif);

    return 0;
}