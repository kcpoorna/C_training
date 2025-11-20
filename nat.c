// write a c program to generate sum of a n natural number !
#include<stdio.h>
void main()
{
    int result=0;
    int n,i;
    printf("enter n ;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result + i ;
    }
    printf("the sum is %d",result);
    
}