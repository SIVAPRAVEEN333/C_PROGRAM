/*
*
* @program: maximum elements of the array
* @Author: Sivapraveen.S
* @Date: 04.03.2020
*
*/



#include<stdio.h>
int *array_element_value,array_element_count;
int main()
{
    int array_element_max;
    printf("Enter the no of elements to be store: ");
    scanf("%d",&array_element_count);
    array_element_value=malloc(array_element_count*sizeof(array_element_value));
    if(array_element_value==NULL)
    printf("Memory not allocated successfully\n");
    if(array_element_value!=NULL)
    printf("Memory allocated successfully\n");
    printf("\nEnter the elements of array: ");
    for(int i=0;i<array_element_count;i++)
    {
        int element_c=i;
        printf("Enter the %d element of the array: ",element_c+1);
        scanf("%d",&array_element_value[i]);    
        printf("\n");
    }
    for(int i=0;i<array_element_count;i++)
    {
        if(array_element_value[i]>array_element_value[i+1])
        {
            array_element_max=array_element_value[i];
            array_element_value[i]=array_element_value[i+1];
            array_element_value[i+1]=array_element_max;
        }
    }
    printf("\nThe maximum elements in the array: %d",array_element_max);
}
