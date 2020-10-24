#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,w;
    float n;
    scanf("%f",&n);
    w=n;
    while(n>=100)
    {
        a++;
        n=n-100;
    }
    while(n>=50)
    {
        b++;
        n=n-50;
    }
    while(n>=20)
    {
        c++;
        n=n-20;
    }
    while(n>=10)
    {
        d++;
        n=n-10;
    }
    while(n>=5)
    {
        e++;
        n=n-5;
    }
    while(n>=2)
    {
        f++;
        n=n-2;
    }
    while(n>=1)
    {
        g++;
        n=n-1;
    }
    printf("%d\n",w);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);
    return 0;
}
