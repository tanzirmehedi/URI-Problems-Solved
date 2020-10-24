#include<stdio.h>
int main()
{
    int arr[4],i,j,temp,d,e,f;
    for(i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
      d=arr[0];
      e=arr[1];
      f=arr[2];

    }

    for(i=0; i<3; i++)
    {
        for(j=i; j<3; j++)
        {
            if(arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n",d,e,f);

    return 0;
}
