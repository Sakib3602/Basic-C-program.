#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    int a[N];
    int b[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("a value is : %d  \n", a[i]);
        printf("\n");
        printf("b value : %d \n", b[i]);
    }
    printf("after copy\n");
    b[1] = 200;

    for (int i = 0; i < N; i++)
    {
        b[i] = a[i];
         
        printf("a value is : %d  \n", a[i]);
        printf("b value : %d \n", b[i]);
    }

   

    return 0;
}