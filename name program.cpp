/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
union employee
{
    char b;
    int a;
    char c[15];
};
int main()
{
    union employee e;
    e.b='s';
    e.a=23;
    strcpy(e.c,"Sivapraveen");
    printf("the b is%c",e.b);
    printf("the a is %d",e.a);
   
        printf("the c is %s",e.c);
}
