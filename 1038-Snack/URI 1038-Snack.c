#include<stdio.h>
main()
{
    int a,b;
    float c;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==1)
            c=b*4.0;
        if(a==2)
            c=b*4.5;
        if(a==3)
            c=b*5.0;
        if(a==4)
            c=b*2.0;
        if(a==5)
            c=b*1.5;
        printf("Total: R$ %.2f\n",c);

    }
    return 0;
}
