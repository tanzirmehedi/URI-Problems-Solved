#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,R1,R2,n,d;
    scanf("%f %f %f",&a,&b,&c);
    if(a==0.0)
        printf("Impossivel calcular\n");
    else
    {
    d=sqrt((b*b)-(4*a*c));
    n=sqrt((b*b)-(4*a*c))/(2.0*a);
    if(n>0||a<0)
    {
        R1=(-b+d)/(2.0*a);
        R2=(-b-d)/(2.0*a);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else

        printf("Impossivel calcular\n");
    }
    return 0;
}
