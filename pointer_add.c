#include<stdio.h>
int main(){

    int X , Y;
    scanf("%d %d", &X, &Y);

    int sum1 = X + Y;

    int *sum = &sum1;


    printf("%d", *sum); 




    return 0;
}