#include <stdio.h>
#include <string.h>
int main()
{
    char S[1000000];

    scanf("%s", S);

    // printf("%s", S);
    long long sum = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {

        sum += S[i] - '0';
    }
    printf("%lld", sum);
     

    return 0;
}