#include <stdio.h>

int main(void)
{
    int a = 20, b = 3;
    double c;

    c = (double)a/(double)b;
    printf("quotient=%.2lf\n", c);
    printf("trunc=%d\n", (int)c);


    return 0;
}