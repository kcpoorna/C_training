#include<stdio.h>
void main()
{
    int result = 1;
    int n, i;
     printf("enter the n:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        result = result*i;

     }
     printf("the product is : %d", result );

}
