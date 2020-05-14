/*
    @Name: finding the Largest number of three numbers using pointer
    @Author: Sivapraveen S
    @Date: 11.03.2020
*/

#include<stdio.h>
int main()
{
    int *p1,*p2,*p3;
    int num1,num2,num3;
    printf("***C program to find the largest of three numbers using pointer***\n");
    printf("\nEnter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    printf("\nEnter the third number: ");
    scanf("%d",&num3);
    p1=&num1;
    p2=&num2;
    p3=&num3;
    printf("\nEntered three number: %d,%d,%d",num1,num2,num3);
    
    if(*p1>*p2 && *p1>*p3)
    printf("\nThe first number is largest of all...");
    else if(*p2>*p3 && *p3>*p1)
    printf("\nThe second number is largest of all...");
    else if(*p3>*p1 && *p3>*p2)
    printf("\nThe third number is largest of all...");
    else if(*p1==*p2 && *p1==*p3 && *p2==*p3)
    printf("\nAll the numbers are equal...");
    if(*p1==*p2)
    printf("\nFirst and second number is same...");
    if(*p2==*p3)
    printf("\nsecond and third number is same...");
    else if(*p3==*p1)
    printf("\nFirst and third number is same...");
    
}
