// create a structurewith three variables name of car , maximum speed ,price . store this in array of structures and display them
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    int speed;
    int price;
};
void main()
{
    int n;
    printf("enter the number of car :");
    scanf("%d", &n);

    struct car c[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter name of car ");
        scanf("%s", c[i].name);

        printf("enter the speed:");
        scanf("%d",&c[i].speed);

        printf("enter the price :");
        scanf("%d",&c[i].price);
    }
    for(int i = 0; i < n; i++){
        printf("%s the name of car \n",c[i].name);
           printf("%d the speed is\n ",c[i].speed);
              printf("%d  the price \n",c[i].price);
    }
}