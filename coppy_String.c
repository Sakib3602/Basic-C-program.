#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char b[10] = "ABcdEF";
    // int l = strlen(b);

    // for (int i = 0; b[i] != '\0'; i++)
    // {
    //     a[i] = b[i];
    // }

    // a[l] = '\0';


    strcpy(a , b);   //buildin fuctions


    printf("%s\n%s", a,b);
    





    return 0;
}