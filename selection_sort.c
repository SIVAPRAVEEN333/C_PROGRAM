/*
    @Name: Selection_sort
    @Author: Sivapraveen S
    @Date: 22.02.2020
*/

/*
varaibles explanation...
array_values_user_index_count = stores the size of the user input array_index;
array_user_value       = stores the user array input values respects to the array_values_user_index_count;
selsort_array_values_store_check =it stores the return value from the function selsort_array_values_user_input() and checks the values is completely stored or not_eq



*/

#include<stdio.h>
//function declaration
int selection_sort(); 

//varaibles declaration
int *selsort_array_user_value,selsort_array_values_user_index_count;



int main()
{
    int selsort_array_values_store_check;
    printf("***\t\t\tSelection sorting Algorithms***\t\t\t\n");
    printf("Enter the no of elements in the array_index to be sorted: ");
    scanf("%d",&selsort_array_values_user_index_count);
    printf("\nEnter the values of the array too be sorted: ");
    selsort_array_user_value=(int*)malloc(selsort_array_values_user_index_count*sizeof(int));       //allocating memory space for the user input array
    for(int i=0;i<selsort_array_values_user_index_count;i++)
    {
        scanf("%d",&selsort_array_user_value);                                              //storing the array values for sorting    
    }
    selsort_array_user_value=(int *)malloc(selsort_array_values_user_index_count*sizeof(int));          //allocaiting memory
    //displays the stored values in the sel_sort_array
    printf("\nThe User input values for the array to be stored: ");
    for(int i=0;i<selsort_array_values_user_index_count;i++)
    {
        printf("%d\t",selsort_array_user_value[i]);
    }
    
    selection_sort();
    
    
    
}





int selection_sort()                        //selection_sort function
{
    //configurinng selection_sort
    printf("\nSelection sort will be proceedded...");
    
    
    
    
}



//int main()
//{
//    int Sorting_algorithm_check;
//    int Selection_sort_result;                  //Selection_sort_result= Selection_Sort function return will be stored in this varaible
//    printf("Enter which Sorting Algorithms do you want too check: "); 
//    printf("\nPress the respective number based on respective Sorting_algorithms... ");
//    printf("\nPress 1 for Selection_Sort\t Press 2 for bubble sort \n Press 3 for insertion sort: ");
//    scanf("%d",&Sorting_algorithm_check);
//   // number=(int*)malloc(count*sizeof(int));
//    if(Sorting_algorithm_check==1)
//    {
//        printf("\nThe Selected Sorting Algorithms is Selection Sort...");
//        int *Sel_sort_number,Sel_sort_element_count;               
//        //Sel_sort_number= varaible will be stored in array with help of pointer allocation, Sel_sort_element_count= number of elements to be sorted
//        printf("\nEnter the number of elements to be sorted: ");
//        scanf("%d",&Sel_sort_element_count);
//        Sel_sort_number=(int *)malloc(Sel_sort_element_count*sizeof(int));
//        printf("\nEnter the elements for Selection Sorting: ");
//        for(int i=0;i<Sel_sort_element_count;i++)
//        {
//            scanf("%d",Sel_sort_number[i]);         //entered elements will be stored here
//        }
//      
//        Selection_sort_result=Selection_Sort(&Sel_sort_number,Sel_sort_element_count);
//    }
//    else if(Sorting_algorithm_check==2)
//    {
//        printf("The Selected Sorting Algorithms is Bubble Sort...");
//    }
//    else if(Sorting_algorithm_check==3)
//   {
//        printf("The Selected Sorting Algorithms is insertion Sort ");
//    }
//    printf("%d",Selection_sort_result);
//}
//
//int Selection_Sort(int *Sel_sort_number,int Sel_sort_element_count)
//{
//    int a=3;        //simple check change after program verified
//    return a;
//}
    
/*
	@Name: Selection_sort
	@Author: Sivapraveen S
	@Date: 22.02.2020
*/


