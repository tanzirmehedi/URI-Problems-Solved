# include<stdio.h>
int main ()
{
    int X,Z,S,H,Y,A;
    scanf("%d",&X);
    Y=X/365;
    Z=X%365;
    S=Z/30;
    H=Z%30;
    printf("%d ano(s)\n",Y);
    printf("%d mes(es)\n",S);
    printf("%d dia(s)\n",H);
    return 0;

}
