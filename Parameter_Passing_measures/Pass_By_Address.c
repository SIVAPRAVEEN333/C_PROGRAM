//Pass by address/Call by address
#include<stdio.h>
#include<stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int swap(int *a,int *b);

int main()
{
    int a,b;
    printf("Enter the two numbers to swap: ");
    scanf("%d\t%d",&a,&b);
    printf("\nThe Entered two numbers will be: %d and %d",a,b);
    int swap_status=swap(&a,&b);
    if(swap_status==0)
    {
        printf("\nSuccessful Termination...");
    }
    else
    {
        printf("\nTermination fails...");
    }
    printf("\nThe values after swap is: %d and %d",a,b);
    return 0;
}

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return EXIT_SUCCESS;
}

