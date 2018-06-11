#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(char *S)
{
    int open = 0;
    int len = strlen(S);
    for (int i = 0; i < len ; i++)
    {
        if ( S[i] == '(' ) open++;
        else if ( S[i] == ')' ) open--;
        else return 0;

        if (open < 0) return 0;
    }
    if (open != 0) return 0;
    return 1;
}

int main()
{
    char* Tests[] = {"(())(((()())))", "(()", "())" };
    int N = 3;
    for (int i = 0; i < N; i++)
    {
        printf( "%d \n", solution(Tests[i]));
    }
    return 0;
}


