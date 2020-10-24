#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2;
    float Z1,Z2,VALOR_A_PAGAR,T1,T2;
    scanf("%d %d %f",&X1,&Y1,&Z1);
    scanf("%d %d %f",&X2,&Y2,&Z2);
    T1=(float)Y1*Z1;
    T2=(float)Y2*Z2;
    VALOR_A_PAGAR=T1+T2;
    printf("VALOR A PAGAR: R$ %.2f\n",VALOR_A_PAGAR);
    return 0;
}

