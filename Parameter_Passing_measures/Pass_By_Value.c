//Pass by value/Call by value
#include<stdio.h>

int sum(int a,int b);

int main()
{
    int a,b;
    printf("Enter the two numbers to add: ");
    scanf("%d\t%d",&a,&b);
    printf("\nThe Entered two numbers will be: %d and %d",a,b);
    int sum_temp=sum(a,b);
    printf("\nThe sum of two numers is: %d",sum_temp);
    return 0;
}

int sum(int a,int b)
{
    int sum_temp;
    sum_temp=a+b;
    return sum_temp;
}


