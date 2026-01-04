#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int warning = 0;

    printf("데이터 개수 N 입력: ");
    scanf("%d", &N);
    int battery[N];

    printf("%d개의 로그 입력: ", N); //로그 입력
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &battery[i]);
    }

    printf("로그: ");//로그 출력
    for(int i = 0; i < N; i++)
    {
        
        printf("%d ", battery[i]);
    }
    printf("\n");

    for(int i = 0; i < N; i++) //로그에 따른 경고 출력
    {
        if(battery[i] <= 30)
        {
            warning = 1;
            
        }
        else if(battery[i] >= 35)
        {
            warning = 0;
        }

        if(warning == 1 && battery[i] < 35) printf("경고 ");
        else if(warning == 0 && battery[i] >= 35) printf("OFF ");
        else if(warning == 0 && battery[i] < 35) printf("OFF ");
        /*
        if(battery[i] <= 30) warning = 1;
        else if(battery[i] >= 35) warning = 0;
        printf("%s ", warning ? "경고" : "OFF"); 
        */
               
        
    }
    printf("\n");



    return 0;
}

