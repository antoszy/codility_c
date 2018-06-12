#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int A[], int N) {
    long long int maxSlice = A[0];
    long long int currentMax = A[0];
    for (int i = 1; i < N; i++)
    {
        if (currentMax > 0) currentMax = currentMax+A[i];
        else currentMax = A[i];
        
        if (currentMax > maxSlice) maxSlice = currentMax;
    }
    return (int)maxSlice;
}

int main()
{
    return 0;
}


