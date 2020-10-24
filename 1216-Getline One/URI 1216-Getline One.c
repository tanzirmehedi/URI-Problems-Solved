#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    double d, total=0.0, count = 0.0,n;
    while(gets(s))
    {
        scanf("%lf", &d);
        total=total+d;
        count=count+1.0;
    }
    n=total/count;
    printf("%.1lf\n",n);
    return 0;
}
