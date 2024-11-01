#include <stdio.h>
#include <string.h>
int main()
{

    char S[10000000];
    scanf("%s", S);

    int len = strlen(S);

    int freq[26] = {0};

    for (int i = 0; i < len; i++)
    {
        freq[S[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c : %d", i+'a', freq[i]);
    }

    return 0;
}