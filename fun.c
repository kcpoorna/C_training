///writeafunction which accepts one input parameter and returns the perimeter of circle
#include<stdio.h>
float area(float x)
{
    const float pi = 3.142;
    float a=2*pi*x;
    return a ;
}
void main()
{
    int x= 4.1;
    printf("the area of circle : %f\n",area(x));
}
