//write a function which will accept and array,size n, and return the difference between last and frist number 
#include<stdio.h>
#include<stdlib.h>
int sub_arr(int arr[],int n)
{
    int sub = arr[0]-arr[n-1];
    return abs(sub);

}
void main()
{
int arr[5]={3,5,6,7};
int n = 3;
printf("%d",sub_arr(arr,n));
}

