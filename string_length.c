#include<stdio.h>
#include<string.h>
int main(){

    char str[20];

    scanf("%[^\n]s", str);

    // int l = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     l++;
    // }
    int l = strlen(str);
    printf("%d : ", l);
    




    return 0;
}