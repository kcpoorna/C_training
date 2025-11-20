#include<stdio.h>
void main()
{
    int arr[4]={20,30,60,69};
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n",*(p+1));

}