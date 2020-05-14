/*
    @Name: Dynamic_memory_allocation
    @Author: Sivapraveen S
    @Date: 23.03.2020
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,n3;
    int *value1,*value2,*value3;
    printf("\t\t\t***Malloc memory allocation***\t\t\t\n");
    printf("\nEnter the n number of elements: ");
    scanf("%d",&n1);
    value1=(int*)malloc(n1*sizeof(int));
    if(value1==NULL)
    printf("\nMemory is not allocated successfully...");
    else
    printf("\nMemory is allocated successfully...");
    
    printf("\nDefault values in the memory associated with n element size: ");
    for(int i=0;i<n1;i++)
    {
        printf("%d\t",value1[i]);
    }
    
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
    if(value2==NULL)
    printf("\nMemory is not allocated successfully...");
    else
    printf("\nMemory is allocated successfully...");
    
    printf("\nDefault values in the memory associated with n element size: ");
    for(int i=0;i<n2;i++)
    {
        printf("%d\t",value2[i]);
    }
    
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
    
    printf("\n\t\t\t***Rellocating memory for 1 and 2...***\t\t\t\n");
    printf("\nEnter the re-size n value for elements to reallocate the memory: ");
    scanf("%d",&n3);
    value1=(int *)realloc(value1,n3*sizeof(int)); //we can also use value3 if you want to realloc the different memory space 
    if(value1==NULL)
    printf("\nRellocation not successfull");
    else
    printf("\nRellocation successfull");
    printf("\nChecking the values after reallocation of memory...");
    for(int i=0;i<n3;i++)
    {
        printf("%d\t",value1[i]);    
    }
    
    free(value1);

}
