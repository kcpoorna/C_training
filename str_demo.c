#include<stdio.h>
#include<string.h>
void main()
{
    char name[20]="k.c.poornima";
    char new[100]="hello-";
    printf("%c",name[6]);// access
    printf("length of string is %d\n",strlen(name));
    strcat(new, name);//new=  hello+ kc poornima
    printf("%s", new);
    //search for a character in string 
    printf("%zs", strstr(new,"H"));//0
}


