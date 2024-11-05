#include<stdio.h>
int main(){

    int X,Y;
    scanf("%d %d", &X, &Y);

    int *temp = &X;
    int *champ = &Y;

    X = *temp;
    Y = *champ;
    printf("%d %d", X, Y);





    return 0;
}