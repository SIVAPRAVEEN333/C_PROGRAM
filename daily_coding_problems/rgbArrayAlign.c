/*
This problem was asked by Google.

Given an array of strictly the characters 'R', 'G', and 'B', segregate the values of the array so that all the Rs come first, the Gs come second, and the Bs come last. You can only swap elements of the array.

Do this in linear time and in-place.

For example, given the array ['G', 'B', 'R', 'R', 'B', 'R', 'G'], it should become ['R', 'R', 'R', 'G', 'G', 'B', 'B'].
*/


//linear search 
//1.R 2.G 3.B

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[]={'G','B','P','R','R','B','R','G','A'};
    char *str_sorted;
    char *str_sorted_r;
    char *str_sorted_g;
    char *str_sorted_b;
    char *str_sorted_total;
    int str_sorted_iCount=0,str_sorted_total_iCount=0;            //icount=before aligined but sorted total_icount=after aligned
    int str_len=sizeof(str)/sizeof(str[0]);
    printf("\nThe length of the str is: %d",str_len);
    str_sorted=(char*)malloc(str_len*sizeof(char));
    printf("\nThe str array before sorted: ");
    for(int i=0;i<str_len;i++)
    {
        printf("%c ",str[i]);
    }
    for(int i=0;i<str_len;i++)
    {
        if(str[i] == 'G' || str[i]=='B' || str[i] == 'R')
        {   
            str_sorted[str_sorted_iCount]=str[i];   
            str_sorted_iCount++;
        }
    }
    str_sorted_total=(char*)malloc((str_sorted_iCount+1)*sizeof(char));
    printf("\nThe length of the sorted str is: %d",str_sorted_iCount);
    printf("\nThe sorted array is: ");
    for(int i=0;i<str_sorted_iCount;i++)
    {
        printf("%c ",str_sorted[i]);
    }
    //arranging function begins
    for(int i=0;i<str_sorted_iCount;i++)
    {
        if(str_sorted[i]=='R')
        {
            str_sorted_total[str_sorted_total_iCount]=str_sorted[i];
            str_sorted_total_iCount++;
        }
    }
    for(int i=0;i<str_sorted_iCount;i++)
    {
        if(str_sorted[i]=='G')
        {
            str_sorted_total[str_sorted_total_iCount]=str_sorted[i];
            str_sorted_total_iCount++;
        }
    }
    for(int i=0;i<str_sorted_iCount;i++)
    {
        if(str_sorted[i]=='B')
        {
            str_sorted_total[str_sorted_total_iCount]=str_sorted[i];
            str_sorted_total_iCount++;
        }
    }
    printf("\nr g b sorted check: ");
    for(int i=0;i<str_sorted_total_iCount;i++)
    {
        printf("%c ",str_sorted_total[i]);
    }
    
}
