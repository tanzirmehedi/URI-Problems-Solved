#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, s, b, c, d, e;
    scanf("%d %d", &a, &s);
    if (a>s)
    {
        b=(24-a);
    d=b+s;
    printf("O JOGO DUROU %d HORA(S)\n", d);
    }
    if (s>a)
    {
        e=a+s-4;
    printf("O JOGO DUROU %d HORA(S)\n", e);
    }
    return 0;
}
