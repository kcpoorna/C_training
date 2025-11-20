//write a c program which will accept three parameter l,b,h and returns volume of cube
#include<stdio.h>
float vol (float l,float b, float h)
{
    float v = l*b*h;
    return v;

}
 void main()
 {
    float l=2;
    float b=2;
    float h=3;
    scanf("%f%f%f",&l,&b,&h);
    printf("the volume of cube : %f\n",vol(l,b,h));
 }
