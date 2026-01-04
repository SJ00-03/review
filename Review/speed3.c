#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()

{
    srand(time(NULL));
    int i = 0, j;
    int speed[100];
    int count = sizeof(speed)/sizeof(speed[0]);
    int random = rand()%30;

    speed[0] = random;

    while(i < 10)
    {
        for(j = i*10; j < i*10 + 10; j++)
        {
            speed[j] = rand()%30;
            if(j=0)
            {
                speed[1] = random;
            }
            else
            {
                speed[j] = speed[j-1] + random;
            }
            
        }




        i += 1;
    }
       

    for(i = 0; i < count-1; i++)
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
    }
}