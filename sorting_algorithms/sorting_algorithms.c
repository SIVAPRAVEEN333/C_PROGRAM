
//intialy it is combined we need create a header file with memory constraint with code optimization 

#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int *a,int n);
int selection_sort(int *a,int n);

int main()
{
    int n,*a;
    printf("User defined Creditionals...\n");
    printf("Enter the number of values to be entered in array: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("\nMemory allocation not successfull...");
    }
    else
    {
        printf("\nMemory allocation successfull...");
    }
    printf("\nEnter the values for the array  to be sorted: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe entered array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    //use one at a time bcoz here array values stored in a it will be already sorted when first sorting algo excuted
    
    printf("\n\t\t\t***Bubble Sorting Algorithm***\t\t\t");
    bubble_sort(a,n);
    printf("\n\t\t\t***Selection Sorting Algorithm***\t\t\t");
    selection_sort(a,n);
    
    return 0;
}

int bubble_sort(int *a,int n)                   //a=array, n=user defined array element size
{
    int temp,i,j;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array (bubble_sort): ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int selection_sort(int *a,int n)
{
    int temp,element_pos,i,j;
    
    for(i=0;i<n-1;i++)
    {
        element_pos=i;                      //use i has minimun element for first and so one
        for(j=i+1;j<n;j++)
        {
            if(a[element_pos]>a[j])         //checking the adjacent element in the array to find the minimum element_pos
            element_pos=j;
        }
        if(element_pos!=i)                  //if its i is the minimum element it is directly passed otherwise it will swap the adjacent element in the std::array<T, N> ; 
        {
            temp=a[i];
            a[i]=a[element_pos];
            a[element_pos]=temp;
        }
    }
    printf("\nThe sorted array (selection_sort): ");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
}



