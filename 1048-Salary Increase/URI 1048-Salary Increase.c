#include<stdio.h>
 int main()
{
    float N,a;
    scanf("%f",&N);
    if(N>=0&&N<=400)
    {
        printf("Novo salario: %.2f\n",N+(15.00/100.00)*N);
        printf("Reajuste ganho: %.2f\n",(15.00/100.00)*N);
        printf("Em percentual: 15 %%\n");
    }
   else if(N>=400.01&&N<=800)
    {
        printf("Novo salario: %.2f\n",N+(12.00/100.00)*N);
        printf("Reajuste ganho: %.2f\n",(12.00/100.00)*N);
        printf("Em percentual: 12 %%\n");
    }
   else if(N>=800.01&&N<=1200)
    {
        printf("Novo salario: %.2f\n",N+(10.00/100.00)*N);
        printf("Reajuste ganho: %.2f\n",(10.00/100.00)*N);
        printf("Em percentual: 10 %%\n");
    }
   else if(N>=1200.01&&N<=2000)
    {
        printf("Novo salario: %.2f\n",N+(7.00/100.00)*N);
        printf("Reajuste ganho: %.2f\n",(7.00/100.00)*N);
        printf("Em percentual: 7 %%\n");
    }
    else if(N>2000.00)
    {
        printf("Novo salario: %.2f\n",N+(4.00/100.00)*N);
        printf("Reajuste ganho: %.2f\n",(4.00/100.00)*N);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
