 // write a function which will accept two input parameters x,y. and returns x*x+y*y
 #include<stdio.h>

int demo (int x,int y)
{
    int sq=x*x+y*y;
    return sq;

}

void main()
{
    int x=2;
    int y=4;
    printf("the sum of square : %d\n",demo(x,y));


}