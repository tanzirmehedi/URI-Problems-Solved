#include<stdio.h>
#define pi 3.14159
int main()
{
    float A,B,C,T,C1,T1,Q,R;
    scanf("%f %f %f",&A,&B,&C);
    T=(A*C)/2;
    C1=pi*C*C;
    T1=((A+B)*C)/2;
    Q=B*B;
    R=A*B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",T,C1,T1,Q,R);
    return 0;
}
