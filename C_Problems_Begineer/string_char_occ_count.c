#include<stdio.h>
#include<stdlib.h>

void main()
{
    char *str;
    char ch;
    int string_length_count=0,string_occurence_count=0;
    
    //allocating memory dynamical
    str=(char*)malloc(50*sizeof(char));
    
    //entering character
    printf("\nEnter the character to find the number of occurence in the string: ");
    scanf("%c",&ch);
    
    printf("\nEnter the string: ");
    scanf("%s",str);
    printf("\nEntered string is: %s",str);
    
    
    //finding the length
    for(int i=0;str[i] != '\0';i++)
    {
        ++string_length_count;
    }
    printf("\nThe length of the user defined string is: %d",string_length_count);
    
    for(int i=0;i<string_length_count;i++)
    {
        if(str[i]==ch)
        {
            ++string_occurence_count;
        }
    }
    printf("\nThe occurence of the string is: %d",string_occurence_count);
}
