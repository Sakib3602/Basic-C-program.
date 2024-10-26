#include<stdio.h>
int main(){

    char str[20];

    scanf("%[^\n]s", str);

    int l = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    printf("%d : ", l);
    




    return 0;
}