#include<stdio.h>
int main(){

    // a -97 z - 122
    //  A - 65 Z - 90

    char X;
    scanf("%c", &X);

    
    if(X >= 65 && X <= 90){
        printf("%c", X + 32);
    }
    else if( X >= 97 && X <= 122){
        printf("%c", X - 32);
    }




    return 0;
}