#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p = &a;
    printf("the address of a is %p\n",&a);
    printf("the address storedin p is %p\n",p);
    printf("the value of a is %d\n",a);
    printf("the value stored at address p is %d\n",*p);
}                                                                  