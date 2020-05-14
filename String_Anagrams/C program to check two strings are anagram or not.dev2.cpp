#include<stdio.h>
#include<string.h>

int array1[],array2[];
int str1_length=0,str2_length=0;
char string1,string2;
int main()
{
    printf("The program to check both the strings ara anagram or not...");
    printf("\nEnter the first string: ");
    scanf("%s",&string1);
    printf("\nEnter the second string: ");
    scanf("%s",&string2);
    printf("\nThe Entered first and second strings are: %s and %s respectively...",string1,string2);
    if(string1 != '\n')
    ++str1_length;
    
    if(string2 != '\n')
    ++str2_length;
    
    printf("\nThe length of the string1 is: %d",str1_length);
    printf("\nThe length of the string2 is: %d",str2_length);
    
    
}
