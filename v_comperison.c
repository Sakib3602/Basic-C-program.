#include <stdio.h>
int main()
{

    int A, B;
    
    scanf("%d %d", &A, &B);
    char S;
    scanf(" %c", &S);

    if (S == '>')
    {
        if (A > B)
        {
            printf("Right");
        }
        else
            printf("Wrong");
    }
    else if (S == '<')
    {
        if (A < B)
        {
            printf("Right");
        }
        else
            printf("Wrong");
    }

    else if (S == '=')
    {
        if (A == B)
        {
            printf("Right");
        }
        else
            printf("Wrong");
    }

    return 0;
}