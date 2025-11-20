#include<stdio.h>

int demo(int a,int b)
{
    int add= a+b;
    return add;

}
 void main()
 {
    int a=56;
    int b=89;
    printf("%d\n", demo(a,b));
    int c=78,d=89;
    printf("%d\n",demo(c,d));
 }
 