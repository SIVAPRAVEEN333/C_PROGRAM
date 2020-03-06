/********************************************************************************
*   @Program_Name: Binary Search                                                *    
*   @Author: Sivapraveen S                                                      *
*   @Date: 06.03.2020               
*   @Description:Binary Search is used to find the poisiton of the given value
*                within the sorted array, it is faster than linear search bcoz
*                it will split the array into left-sub array and right-sub array
*                if the element will founded in the left-sub we need not to search
*                in the right-sub bcoz of this only its called to be faster than
*                the left-sub array. 
*******************************************************************************/

#include <stdio.h>
int a_sort(int *elements_value,int n_element);                         /*declare same function when you used this variable as local, dont use the same variable name when you declared that varible as 
                                                                    global bcoz it will overwrite the value of the varible*/

int main()
{
    int *elements_value;
    int n_element;
    printf("***Binary search***");
    printf("\nEnter the number of elements: ");
    scanf("%d",&n_element);
    printf("\nEnter the %d Elements: ",n_element);
    elements_value=(int*)malloc(n_element*sizeof(int));
    for(int i=0;i<n_element;i++)
    {
        scanf("%d\t",&elements_value[i]);
    }
    printf("\nThe elements before sorted : ");
    for(int i=0;i<n_element;i++)
    {
        printf("%d\t",elements_value[i]);
    }
    a_sort(elements_value,n_element);                       //a_sort->Ascending sorting for the given array
    if(a_sort)
    printf("\nSuccessfully sorted...");
    else
    printf("\nNot Successfully sorted...");
    printf("\nThe sorted array is: ");
    for(int i=0;i<n_element;i++)
    {
        printf("%d\t",elements_value[i]);
    }
    
    printf("Sorting done proceed...");
    
}

int a_sort(int *elements_value,int n_element)
{
   /* One method
   int i,j,temp;
    for(i=0;i<n_element;i++)
    {
        for(j=i+1;j<n_element;j++)
        {
            if(elements_value[i]>elements_value[j])
            {
                temp=elements_value[i];
                elements_value[i]=elements_value[j];
                elements_value[j]=temp;
            }
        }
    }
    */
    /* second method
        ifmore
    */
    int i,j,temp;
    for(i=1;i<n_element;i++)
    {
        temp=elements_value[i];
        for(j=i;j>0 && elements_value[j-1]>temp;j--)
        {
            elements_value[j]=elements_value[j-1];
        }
        elements_value[j]=temp;
    }
    return 0;
}

