#include <stdio.h>


int main()
{
    int N, i, min=0, max=0;
    
    scanf("%d", &N);
    int A[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < N; i++)
    {
        if(A[i]>A[i+1])
        {
            max = A[i];
        }        
    }
    
    for(i = 0; i < N; i++)
    {
        if(A[i]<A[i+1])
        {
            min = A[i];
        }        
    }


    printf("%d %d\n", min, max);

    return 0;
        
}