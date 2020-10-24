#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,MaiorAB;
    scanf("%d %d %d",&a,&b,&c);
    if(a<c)
        a=c;
    MaiorAB=(a+b+abs(a-b))/2;
    printf("%d eh o maior\n",MaiorAB);
    return 0;
}
