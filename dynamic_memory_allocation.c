/*
    @Name: Dynamic_memory_allocation
    @Author: Sivapraveen S
    @Date: 23.03.2020
*/


#include<stdio.h>
int main()
{
    int n1,n2;
    int *value1,*value2;
    printf("\t\t\t***Malloc memory allocation***\t\t\t\n");
    printf("\nEnter the n number of elements: ");
    scanf("%d",&n1);
    value1=(int*)malloc(n1*sizeof(int));
    printf("\nEnter the values: ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&value1[i]);
    }
    printf("\nValues stored.... The entered values are...");
    for(int i=0;i<n1;i++)
    {
        printf("%d\t",value1[i]);
    }
    
    printf("\nIts ready to free...");
    free(value1);
    printf("\nThe values stored after memory free...");
    for(int i=0;i<n1;i++)
    {
        printf("%d\t",value1[i]);
    }
    
    printf("\n\t\t\t***Calloc memory Allocation***\t\t\t\n");
    printf("\nEnter the n elements: ");
    scanf("%d",&n2);
    value2=(int *)calloc(n2,sizeof(int));
    printf("\nEnter the elements: ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&value2[i]);
    }
    printf("\nThe values stored... The entered values are...");
    for(int i=0;i<n2;i++)
    {
        printf("%d\t",value2[i]);
    }
    free(value2);
    printf("\nThe values stored after memory free...");
    for(int i=0;i<n2;i++)
    {
        printf("%d\t",value2[i]);
    }
}
