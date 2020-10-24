#include<stdio.h>
#define PI 3.14159
int main()
{
    int X;
    double a;
    scanf("%d",&X);
    a=(double)(4.0/3.0)*PI*X*X*X;
    printf("VOLUME = %.3lf\n",a);
    return 0;
}
