#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int x,y;
        scanf("%d %d", &x, &y);
        if(x > y){
            int c ;
            c = x;
            x = y;
            y = c;
        }
        int sum = 0;
        for(int k = x + 1; k < y; k++){

            if(k % 2 != 0){
                
                sum += k;
            }
        }

        printf("%d\n",sum);
        
    }
    




    return 0;
}