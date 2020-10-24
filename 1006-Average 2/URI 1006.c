#include <stdio.h>
int main()
{
    float A,B,C,MEDIA;
    scanf("%f %f %f", &A, &B, &C);
    MEDIA=(A*2.0+B*3.0+C*5.0)/(2.0+3.0+5.0);
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
