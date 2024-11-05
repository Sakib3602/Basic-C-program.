#include<stdio.h>

int sum(int a, int b){

    return a + b;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    
    int p = sum(a,b);
    printf("%d",p);


    return 0;
}