#include<stdio.h>
int main()
{
    int X,Y;
    float Z,A;
    scanf("%d %d",&X,&Y);
    Z=(float)Y/12.0;
    A=(float)Z*X;
    printf("%.3f\n",A);
    return 0;
}
