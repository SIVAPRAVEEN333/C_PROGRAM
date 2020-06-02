//day 40

#include<stdio.h>
#include<stdlib.h>

int nonDupInt(int *arr,int n)
{
    int sin_store=0,j,k;
    int *var_store,var_count=0;
    var_store=(int*)malloc(n*sizeof(int));
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
            if(arr[j]==arr[k])
            {
                var_count++;
            }
        }
        var_store[j]=var_count;
        var_count=0;
    }
    printf("\nThe Elements number of repetitation is listed in same index: ");
    for(j=0;j<n;j++)
    {
        printf("%d ",var_store[j]);
        if(var_store[j]==1)
        {
            sin_store=arr[j];
        }
    }
    return sin_store;
}
int main()
{
    int *arr1,*arr2,arr1_size,arr2_size;
    int n1,n2;
    int i;
    printf("\nEnter the number of element to store in array 1: ");
    scanf("%d",&n1);
    printf("\nEnter the number of  element to store in array 2: ");
    scanf("%d",&n2);
    //allocating dyanamic memory
    arr1=(int*)malloc(n1*sizeof(int));
    arr2=(int*)malloc(n2*sizeof(int));
    printf("\nEnter the elements for array 1: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter the elements for array 2: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\nEntered Elements of the array 1 is: ");
    for(i=0;i<n1;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nEntered Elements of the array 2 is: ");
    for(i=0;i<n2;i++)
    {
        printf("%d ",arr2[i]);
    }
    //passing array to fun
    int non_dup1,non_dup2;
    non_dup1=nonDupInt(arr1,n1);
    non_dup2=nonDupInt(arr2,n2);
    printf("\nThe non-duplicate  integer given in  the array 1 is: %d",non_dup1);
    printf("\nThe non-duplicate  integer given in  the array 2 is: %d",non_dup2);
    
    return 0;
}

