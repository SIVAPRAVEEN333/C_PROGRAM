#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
#include "string_s.h"

/*eg for variable decalration
string_length=function name
str_length=function local varible not main
s_length= main varible to store the return
so on for all the string function
*/



int main()
{
    char string[100],s_copy[100],s_reverse[100],s1_compare[100],s2_compare[100],s1_con[100],s2_con[100],s3_con;
    char s_vowel[100],s_vowel_remove[100];
	//char s_alpha[100];
	int s_vow=0,s_consonants=0,check_vowel=0;					//stroing the value from string_vowel
    int s_length=0,k;                  
  
    printf("\nEnter the string: ");
    scanf("%s",string);
  	string_print(string);
   
   /*
   	//finding the length of the string
   s_length=string_length(string);
    printf("\nThe length of the given string is: %d",s_length);
	*/
/*    
    //copying the string
    string_copy(string,s_copy);
    printf("\nThe string copied to s_copy is: %s",s_copy);

    //string reverse
    printf("\nbefore string_reverse: ");
    for(k=0;string[k] != '\0';k++ )
    {
        printf("%c",string[k]);
    }
    printf("\n");
    string_reverse(s_copy,s_reverse);
    printf("\nThe reverse string from the given string is: %s",s_reverse);
    
    //string compare
    printf("\nEnter the first string to compare: ");
    scanf("%s",s1_compare);
    printf("\nEnter the second string to compare: ");
    scanf("%s",s2_compare);
    int s_compare=string_compare(s1_compare,s2_compare);
    if(s_compare==0)
    {
        printf("\nTwo string are equal");
    }
    else
    {
        printf("\nTwo string are non-equal");
    }
    
    //string concatenate
    printf("\nEnter the first string to concatenate: ");
    scanf("%s",s1_con);
    printf("\nEnter the second string to concatenate: ");
    scanf("%s",s2_con);
    printf("\nThe before concatenation of two string is: %s and %s",s1_con,s2_con);
    string_concatenate(s1_con,s2_con,s3_con);
    printf("\nThe after concatenation: %s and %s",s3_con);

	//finding the vowels and consonants in the string
    printf("\nEnter The string to find the vowels and consonants: ");
    scanf("%s",s_vowel);
	string_vowel(s_vowel,&s_vow,&s_consonants); 
    printf("\nThe Total vowels and consonants in the given will be-> vowel: %d and consonants: %d",s_vow,s_consonants);
	
	//vowel check
	printf("\n\t\t\t***Vowel Check***\t\t\t");
	printf("\nEnter the string to check is there vowel is present or not: ");
	scanf("%s",string);
	check_vowel=string_vowel_check(string);
	if(check_vowel==1)
	{
		printf("\nVowel is present in the string");
	}

	else
	{
		printf("\nVowel is not present in the string");
	}
	 
	//vowel remove in the string
    printf("\n***\t\t\tVowel Remove in the given string***\t\t\t");
    printf("\nEnter the string to remove the vowels from that: ");
    scanf("%s",string);								//this is also previsoly used string array here again im using the same string
   	string_vowel_remove_1(string,s_vowel_remove);		//first argument will have an real string and vowel_remove string is in second argument
	printf("\nString after removed the vowels: %s",s_vowel_remove);

	//vowel remove in the original string(by pasing single argument and output will affect in the same string
	printf("\nVowel removed function with single argument");
    printf("\nEnter the string to remove the vowels from that: ");
    scanf("%s",string);								//this is also previsoly used string array here again im using the same string
   	string_vowel_remove_2(string);
    printf("\nString after removed the vowels: %s",string);
    
    //string_palindrome
    printf("\n\t\t\t***String Palindrom***\t\t\t");
    printf("\nEnter the string to find it is palindrome or not: ");
    scanf("%s",string);
    string_palindrome(string);

    //sorting the string in alphabetical order
    printf("\n\t\t\t***Sorting the string in alphabetical order***\t\t\t");
    printf("\nEnter the string to be sorted: ");
    scanf("%s",string);
    string_alpha_order_sort(string);
    //printf("\nThe (future_use)Alphabetical order for the given string is: %s",s_alpha);	//use if you copy the string to the argument 2

    //remove all characters in a string expect the alphabets
    printf("\n\t\t\t***Remove all characters in a string expect alphabets***\t\t\t");
	printf("\nEnter the string with mingled characters with alphabets to sort: ");
	scanf("%s",string);
	string_remove_expect_char(string);    

    
    //removing white spaces in the string
    printf("\n\t\t\t***Removing white space in the string****\t\t\t");
    printf("\nEnter the string to remove white spaces:");
    scanf("%s",string);
    string_remove_spaces(string);
    printf("\nThe string(main) after removing spaces is: %s",string);
    
*/

	/*checking the given name or string in the list, if there is match it will return 0 otherwise it will return 0
		using array of pointer to string concept this concept will minimize the memory waste which was occupied  by strig array
	*/
	//get-get the listed datas, check-check the entered name in the list
	int string_user_temp_status;			//.c file also having the same variable used to check both dif
	char str_user_data_check[10];
	printf("\n***String_Name_Match***");
	printf("\nEnter \"get(lowercase)\" to list the names in the array... Enter \"check\" to check the user entered data: ");	
	scanf("%s",str_user_data_check);
	
	printf("\nEnter the string to store for checking: ");
	scanf("%s",string);
	string_user_temp_status=string_match(string,str_user_data_check);
	if(string_user_temp_status==1)
	{
		printf("\nsuceessfully terminated...");
	}
	else 
	{
		printf("\nThe termination fails");
	}
	
	//added anagram
	
	//after the one function used the string data will be changed due to previous function excutionn.... here im using for test case with same variable name for all the function test you can use specific varible name
    
    return 0;
}



