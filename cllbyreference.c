//write a function which will multiply three numbers and call it by reference; 
#include<stdio.h>
void mul_ref(int *a,int *b,int *c )
{
    int mul= (*a)*(*b)*(*c);
    printf("%d",mul);

}
void main()
{
    int a =23;
    int b = 2;
    int c = 4;
    printf("call by reference :\n");
    mul_ref(&a,&b,&c);
}
