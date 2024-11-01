#include<stdio.h>
#include<string.h>
int main(){

    char x[20];
    scanf("%s", x);

    char y[20];

    for (int i = 0; x[i] != '\0'; i++)
    {
        for (int j = '\0'; j < 0; j--)
        {
            y[j] = x[i]; 
        }
        
    }

    printf("%s", y);
    



    return 0;
}