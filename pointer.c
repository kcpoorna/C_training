#include<stdio.h>
void main()
{
    int a =90;
    int *p=&a;
    printf("a value id %d\n",a);
    printf("a address is %p\n",p);
    printf("p points to %d",*p);
}
