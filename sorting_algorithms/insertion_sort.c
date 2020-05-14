/*
    @Name: Insertion_Sort
    @Author: Sivapraveen S
    @Date: 11.03.2020
*/

/*
varaibles explanation...
array_values_user_index_count = stores the size of the user input array_index;
array_user_value       = stores the user array input values respects to the array_values_user_index_count;
inssort_array_values_store_check =it stores the return value from the function inssort_array_values_user_input() and checks the values is completely stored or not_eq



*/

#include<stdio.h>
//function declaration
#include<stdio.h>
//function declaration
int insertion_sort(); 

//varaibles declaration
int *inssort_array_user_value,inssort_array_values_user_index_count;


//this is for only selection_sort for all types of sorting Algorithms in single program change the values getting!#
int main()
{
    int inssort_array_values_store_check;
    printf("***\t\t\tInsertion sorting Algorithms***\t\t\t\n");
    printf("Enter the no of elements in the array_index to be sorted: ");
    scanf("%d",&inssort_array_values_user_index_count);
    printf("\nEnter the values of the array too be sorted: ");
    inssort_array_user_value=(int*)malloc(inssort_array_values_user_index_count*sizeof(int));       //allocating memory space for the user input array
    for(int i=0;i<inssort_array_values_user_index_count;i++)
    {
        scanf("%d",&inssort_array_user_value[i]);                                              //storing the array values for sorting    
    }
    printf("\nThe User input values for the array to be stored: ");
    for(int i=0;i<inssort_array_values_user_index_count;i++)
    {
        printf("%d\t",inssort_array_user_value[i]);
    }
    
    insertion_sort();
    
    
    
}





int insertion_sort()                        //insertion_sort function
{
    //Implementing the insertion_sort Algorithm
    printf("\nInsertion sort will be proceedded...\n");
    int i,j,temp;
    for(i=1;i<inssort_array_values_user_index_count;i++)
    {
       temp=inssort_array_user_value[i];
       j=i-1;
       while(temp<inssort_array_user_value[j]&&j>=0)
       {
           inssort_array_user_value[j+1]=inssort_array_user_value[j];
           j=j-1;
       }
       inssort_array_user_value[j+1]=temp;
       
    }
    printf("The sorted array(insertion sort): ");
    for(int i=0;i<inssort_array_values_user_index_count;i++)
    {
        printf("%d\t",inssort_array_user_value[i]);
    }
    return 0;               
}

