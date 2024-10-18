#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);

    if(x <= 1){
        printf("NO");
    }else {

        int c = 0;

        for (int i = 1; i <= x; i++)
        {
            if(x % i == 0){
               
                c++;
            }
        }
    
        
        if (c == 2)
        {
            printf("YES");
        }else printf("NO");
        

    }




    return 0;
}