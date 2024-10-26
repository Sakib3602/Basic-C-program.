#include<stdio.h>
#include<string.h>
int main(){

    char a[20] = "sakib";
    char b[20] = "sarkar";

    int len_a = strlen(a);
    int len_b = strlen(b);

    int length = len_a + len_b;


    for(int i = len_a , j = 0; i < length; j++, i++){
        a[i] = b[j];
    }

    a[length] = '\0';

    printf("%s" , a);





    return 0;
}