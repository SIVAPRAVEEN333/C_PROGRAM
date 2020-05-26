/*
*sum of n natural number
*description:
*   if n=5-> 1+2+3+4+5=15
    if n=6-> 1+2+3+4+5+6=21
    if n=8-> 1+2+3+4+5+6+7+8=36
*/
#include<stdio.h>

int main()
{
    int n,sum_n;
    printf("Enter the limit for N natural number: ");
    scanf("%d",&n);
    while(n>0)
    {
        sum_n=sum_n+n;
        n--;
    }
    printf("\nThe sum of n natural numbers is: %d",sum_n);
    
}
