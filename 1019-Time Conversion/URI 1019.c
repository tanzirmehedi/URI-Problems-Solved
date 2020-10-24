# include<stdio.h>
int main ()
{
    int X,Z,S,H,Y,A;
    scanf("%d",&X);
    Y=X/3600;
    Z=X%3600;
    S=Z/60;
    H=Z%60;
    printf("%d:%d:%d\n",Y,S,H);
    return 0;

}
