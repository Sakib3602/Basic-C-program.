#include<stdio.h>
int main(){

    int a = 100;
    int *b = &a;

    printf("%d\n", *b);

    int arr[] = {10, 30, 40 , 56};

    int *x = &arr;

    printf("%d   ", *(x+3));
    

 


   



    return 0;
}