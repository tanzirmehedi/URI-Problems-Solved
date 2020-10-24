#include <stdio.h>
#include<string.h>
int main()
{
    int t,s,led[10]={6,2,5,5,4,5,6,3,7,6};
    char d;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        s=0;
        while((d=getchar())!='\n')
        {
            s=s+led[d-'0'];
        }
        printf("%d leds\n",s);
    }
    return 0;
}
