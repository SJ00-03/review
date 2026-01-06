/*                A번 문제 풀이

1-1 ary의 크기가 정해져있지 않아서 출력되지 않는다.  XXX
1-2 int ary[n] n에 양수의 정수를 넣어서 크기를 정해줘야한다.  XXXXX

-->

-----------------------
2. sizeof(pa)는 포인터의 크기라서 8비트라서 제대로 출력되지않아. 8/4 = 2가 되는 거 같아.  OOOO
#include <stdio.h>

void print_ary(int *pa, int n)
{
    
    for (int i = 0; i < n; i++) printf("%d ", pa[i]);
    printf("\n");
}

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    print_ary(a, n);
}
-------------------------------------------------------------------------------

3. 
#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int x[3] = {1, 2, 3};
    int y[7] = {1, 2, 3, 4, 5, 6, 7};

    print_ary(x, 3); //print_ary(x, (int)sizeof(x)/sizeof(x[0])) 이렇게 구하면 유지 보수에 좋다
    print_ary(y, 7);

    return 0;
}

void print_ary(int *pa, int size)
{ 
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
    printf("\n");
}
------------------------------------------------------------------------


4. 당연히 pa 배열의 값으로 넣어서 처음부터 대소 비교를 해야하니까 max값에 pa[0] 값을 넣어야된다고 생각해
*/

/*  ---------------------------- B번 문제 풀이 ------------------------------------------
5. [A][
]
                        ----------------------------

6.                  
#include <stdio.h>
int main(void){
    char c1, c2;
    scanf(" %c", &c1);
    scanf(" %c", &c2);
    printf("[%c][%c]\n", c1, c2);
}
                    -------------------------------------------

7. 엔터가 들어간다 scanf의 결과는 엔터를 포함하기 때문에 버퍼에 남아있는 엔터가 입력됨.
                    ----------------------------------------------------

8.

*/

/* --------------------------- C번 문제 풀이 ------------------------------------------------
9. 2, 4
                         ---------------------
 

10. 
char name[20];
char reason[80];

printf("이름: ");
scanf("%s", name);
getchar() //개행을 소비한다
printf("이유: ");
fgets(reason, sizeof(reason), stdin);

printf("%s: %s", name, reason);
                        -------------------------------


11. gets를 사용하면 오버 플로우가 생길 수 있다. 대안은 scanf사용 또는 fgets 사용이 있다. 

                    ------------------------------------------


12.
char s[80];
fgets(s, sizeof(s), stdin);
getchar();
                    ------------------------------------------


13. 
#include <stdio.h>

void my_gets(char *str, int size)
{
    int ch;
    int i = 0;

    while ( i < size - 1 ) {
        str[i++] = (char)ch;
    }
    str[i] = '\0';
}
                    ------------------------------------------


14. 
my_gets[i] = '\0'
                    ------------------------------------------


15.  1, 2, 4

*/


/* --------------------------- D번 문제 풀이 ------------------------------------------------

16. 6
8

17. 

18.  
int i, size = sizeof(b) / sizeof(b[0]);
for(i = 0; i < size; i++)                  //a[i] != '\0'
{
    b[i] = a[i];
}

*/



#include <stdio.h>
int main()
{
    char name[20];
    char reason[80];

    printf("이름: ");
    scanf("%s", name);
    getchar();
    printf("이유: ");
    fgets(reason, sizeof(reason), stdin);

    printf("%s: %s", name, reason);

    return 0;
}
