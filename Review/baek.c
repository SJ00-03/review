#include <stdio.h>


int main()

{
    int N, M, repeat;
    
    scanf("%d %d", &N, &M);
    int bucket[N];

    for(repeat = 0; repeat < N; repeat++)
    {
        bucket[repeat] = 0;
    }

    for(repeat = 0; repeat < M; repeat++)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        
        for(i; i <= j; i++)
        {
            bucket[i-1] = k;
        }
        
    }

    for(repeat = 0; repeat < N; repeat++)
    {
        printf("%d ", bucket[repeat]);
    }

    printf("\n");

    return 0;   
}
    
