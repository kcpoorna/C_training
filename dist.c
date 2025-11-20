#include<stdio.h>
#include<math.h>

void main()
{
   int x1,x2,y1,y2;
   printf("enter thew value for x1,x2");
   scanf("%d%d",&x1,&x2);

   printf("enter the value of y1,y2");
   scanf("%d,%d",&y1,&y2);
   int d1 = x2-x1;
   int d2= y2-y1;
    double  dist= sqrt((d1*d1)+(d2*d2));
      printf("the distance is: %f",dist);

}