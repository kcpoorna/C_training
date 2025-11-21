#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p = (float *)calloc(4,sizeof(float));

    p[0] = 10.9;
    p[1] = 20.89;
    p[2] = 30.09;
    p[3] = 40;
    printf("%f",p[2]);
    free(p);
}