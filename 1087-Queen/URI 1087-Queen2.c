#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,X,Y,n=2;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)&&x1!=0&&y1!=0&&x2!=0&&y2!=0)
    {

            X=pow((x1-x2),n);

            Y=pow((y1-y2),n);

        if(x1==x2&&y1==y2)
            printf("0\n");
        else if(x1==x2||y1==y2||X==Y)
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
