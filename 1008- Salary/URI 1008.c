#include <stdio.h>
int main()
{
    int A,NUMBER;
    float SALARY,S;
    scanf("%d %d %f", &A, &NUMBER, &SALARY);
    S=(float)NUMBER*SALARY;
    printf("NUMBER = %d\n",A);
    printf("SALARY = U$ %.2f\n",S);
    return 0;
}
