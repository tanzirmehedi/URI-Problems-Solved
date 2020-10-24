#include<stdio.h>
int main()
{
    char N;
    double X,Y,TOTAL;
    scanf("%S",&N);
    scanf("%lf %lf",&X,&Y);
    TOTAL=X+Y*15/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
