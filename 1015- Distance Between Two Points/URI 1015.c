#include<stdio.h>
#include<math.h>
int main()
{
int X1,Y1,X2,Y2;
double S,A,B;
scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
A=pow((X1-X2),2);
B=pow((Y1-Y2),2);
S=pow((A+B),.5);
printf("%.4lf\n",S);
return 0;
}
