#include <stdio.h>

double dtor(double deg)
{
    double radian = deg * 3.14 / 180;
    return radian; 
}

double rtod(double rad)
{
    double degree = rad * 180 / 3.14;
    return degree;
}

double avg(double x, double y)
{
    double avg = (x + y) / 2;
    return avg;
}

int main()
{
    int choice;
    double angle, changed;
    
    printf("Degree to Radian은 1, Radian to Degree는 2을 입력하세요: ");
    scanf("%d", &choice);
    printf("변환하고 싶은 값을 입력하세요: ");
    scanf("%lf", &angle);

    if(choice == 2)
    {
        changed = rtod(angle);
        printf("degree = %lf", changed);
    }
    else if(choice == 1)
    {
        changed = dtor(angle);
        printf("rad = %lf", changed);
    }
    else{
        printf("입력값을 확인하세요.\n");
        return 0;
    } 

    printf("\n");
    double average = avg(angle, changed);
    printf("%lf\n", average);

    return 0;
}