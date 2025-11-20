#include<stdio.h>
void display(int n)
{
    if(n>10) // base cond
    return;

    printf("%d\n",  n);
    display(n+1);// recursive call 

}
void main()
    {
     display(2);
    }
