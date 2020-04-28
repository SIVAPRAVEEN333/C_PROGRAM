#include<stdio.h>
#include<stdlib.h>


int insertion_sort(int *arr,int size);

int main()
{
    int array_size=0,*arr;
    printf("Enter the index_size for the array: ");
    scanf("%d",&array_size);
    arr=(int*)malloc(array_size*sizeof(int));
    
    printf("\nEnter the elements for the array: ");
    for(int i=0;i<array_size;i++)
    {
        int temp=i+1;
        printf("\nEnter %d Element: ",temp);
        scanf("%d",&arr[i]);
    }
    
    printf("\nEntered elements: ");
    for(int i=0;i<array_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    insertion_sort(arr,array_size);
    
    printf("\nThe sorted array(insertion_sort) is: ");
    for(int i=0;i<array_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

int insertion_sort(int *array,int size)
{
    int array_i;
    for(array_i=1;array_i<size;array_i++)
    {
        int key=array[array_i];
        int j=array_i-1;
            
        while(array_i<array[j] && j>=0)
        {
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;                             // this time j is in -1 so we need to add one
    }
    return 0;
}

