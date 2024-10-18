#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    for (int i = 2; i <= N; i++)
    {
        int x = 0;

        for (int j = 1; j <= i ; j++)
        {
            if(i % j == 0){
                x++;
            }

        }
        if(x == 2){
            printf("%d ", i);
        }
        
        
    }
    





    return 0;
}