#include<stdio.h>

int recFun(int a);

int main()
{
    int a=5;
    printf("The value of a in funL:%d\n",a);
    recFun(a);
}

int recFun(int a)
{
    if(a>0)
    {
        printf("%d ",a);
        recFun(a-1);    
    }
            
}
