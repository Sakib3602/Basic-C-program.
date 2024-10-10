// reversing digit
#include<stdio.h>

int main(){

    int t;
    scanf("%d",&t);


    for(int i = 0; i < t; i++){

        int d;
        scanf("%d",&d);


        while (d > 0)
        {
            int digit = d % 10;
            printf("%d ",digit);

            d/=10;
        }
        printf("\n");
        






    }



    return 0;
}