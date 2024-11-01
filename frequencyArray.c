#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int f[100000] = {0};

    for (int i = 0; i < n; i++)
    {
        f[x[i]] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n",i, f[i]);
    }
    




    printf("%d", f[5]);
    
    





    return 0;
}