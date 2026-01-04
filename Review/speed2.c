#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()

{
    srand(time(NULL));
    
    int speed[50];
    int count = sizeof(speed)/sizeof(speed[0]);
    


    for(int i = 0; i < count; i++)
    {
        int random = rand()%30;
        printf("%2d ", speed[i] = random);
        if(i%10 == 9) printf("\n");
    }
    printf("\n");

    for(int i = 0; i < count-1; i++)
    {
        
        if(speed[i+1] - speed[i] >= 10)
        {
            printf("급가속 ");
        }
        else if(speed[i+1] - speed[i] <= -10)
        {
            printf("급제동 ");            
        }
        else
        printf("Good ");
        if(i%10 == 9) printf("\n");
    }
    printf("\n");

    return 0;
}

