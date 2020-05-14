#include<stdio.h>
#include<stdlib.h>
#include "string_s.h"
//#include<string.h>
#include "def.h"


#ifdef STRING_PRINT_S
int string_print(char *str)              //prints the string in the same order
{   
    printf("\nThe given string is: %s",str);
    
    return 0;
}
#endif

#ifdef STRING_LENGTH_S
int string_length(char *str)             //returns the length of the string
{
	int i=0;
    static int str_length;
   // str=(char*)malloc(100*sizeof(char));
    for(i=0;str[i] != '\0';i++)
    {
        ++str_length;
    }
    return str_length;
}
#endif

#ifdef STRING_COPY_S
char string_copy(char *str_1,char *str_2)
{
    
    printf("\nEntering into the string_copy function...");
    //static char *str_copy;
    int i;
   // str=(char*)malloc(100*sizeof(char));
    for(i=0;str_1[i] != '\0';i++)
    {
        str_2[i]=str_1[i];	
    }
    str_2[i]='\0';
    printf("\nCopying done: %s  and %s ",str_1,str_2);
    
    return 0;
}
#endif

#ifdef STRING_REVERSE_S
char string_reverse(char *str_1,char *str_2)
{
    //str_1=is user given string
    //str_2=is reversed string
    //static char *str_reverse;
    int i,str_length=0,str_rev_count=0;
    //str=(char*)malloc(sizeof(char));
    for(i=0;str_1[i] != '\0';i++)
    {
        ++str_length;    
    }    
    --str_length;
    for(i=str_length;i>=0;i--)
    {
        str_2[str_rev_count]=str_1[i];
        ++str_rev_count;
    }
    //str_rev_count=0;
    str_2[str_rev_count]='\0';
    return 0;
}
#endif

#ifdef STRING_COMPARE_S
char string_compare(char *str_1,char *str_2)
{
    while(*str_1==*str_2)
    {
        if(*str_1=='\0')
        return 0;
        str_1++;
        str_2++;
    }
    return (*str_1-*str_2);
}
#endif

#ifdef STRING_CONCATENATE_S
char string_concatenate(char *str_1,char *str_2,char *str_3)
{
    int i=0,j=0;
    while(str_1[i] != '\0')
    {
        str_3[j]=str_1[i];
        ++i;
        ++j;
    }
    i=0;
    while(str_2[i] != '\0')
    {
        str_3[j]=str_2[i];
        ++i;
        ++j;
    }
    str_3[j]='\0';

    return 0;
}
#endif

#ifdef STRING_VOWEL_S
int string_vowel(char *str,int *str_vow,int *str_consonants)
{
//	str_vow=0;
//	str_consonants=0;
	
//	int check_vowel=0;
	while(*str != '\0')
	{
		if(*str=='A' || *str=='a' || *str=='E' || *str=='e' || *str=='I' || *str=='i' || *str=='O' || *str=='o' || *str=='U' || *str=='u')
		{
			*str_vow=*str_vow+1;	
			printf("\nstr_vow count= %d",*str_vow);
			//check_vowel=1;
		}
		else
		{
			*str_consonants=*str_consonants+1;	
			printf("\nstr_consonants count= %d",*str_consonants);
		}
		str++;
		printf("\n%s",str);
	}
//	return check_vowel;				//check_vowel=0 (vowel is present), check_vowel=1 (vowel is not-present)
	return 0;
}
#endif

#ifdef STRING_VOWEL_CHECK_S
char string_vowel_check(char *str)
{
	int check_vowel=1;
	while(*str != '\0')
	{
	//	printf("\nEntering into the string_vowel_check while loop....");
		if(*str=='A' || *str=='a' || *str=='E' || *str=='e' || *str=='I' || *str=='i' || *str=='O' || *str=='o' || *str=='U' || *str=='u')
		{
			check_vowel=1;
	//		printf("\nCheck_vowel: %d",check_vowel);
		}
		else
		{
			check_vowel=0;
	//		printf("\nCheck_vowel: %d",check_vowel);
		}
		str++;
	}
	return check_vowel;
}
#endif

#ifdef CHAR_VOWEL_CHECK_S
int char_vowel_check(char ch)							//its checks the single character is vowel or not 
{
	int check_vowel=0;
	if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
	{
		check_vowel=1;
	}
	else
	{
		check_vowel=0;
	}
	return check_vowel;	
}
#endif

#ifdef CHAR_SWAP_S
char char_swap(char *ch_1,char *ch_2)
{
	char temp=0;
	
	temp=*ch_1;
	*ch_1=*ch_2;
	*ch_2=temp;	
	return 0;
}
#endif

#ifdef STRING_VOWEL_REMOVE_1_S
char string_vowel_remove_1(char *str_1,char *str_2)			//first argument will have an real string and vowel_remove string is in second argument(str_2)
{
	int i=0,d=0;
	for(i=0;str_1[i] != '\0';i++)
	{
		if(char_vowel_check(str_1[i])==0)					//if vowel is not present in the sepearate index string
		{
			str_2[d]=str_1[i];
			++d;
		}
	}
	str_2[d]='\0';
	return 0;
}
#endif

#ifdef STRING_VOWEL_REMOVE_2_S
char string_vowel_remove_2(char *str)
{
	char str_2[100];
	int i=0,d=0;
	for(i=0;str[i] != '\0';i++)
	{
		if(char_vowel_check(str[i])==0)					//if vowel is not present in the sepearate index string
		{
			str_2[d]=str[i];
			++d;
		}
	}
	str_2[d]='\0';
	
	string_copy(str_2,str);
		return 0;
}
#endif

#ifdef STRING_PALINDROME_S
char string_palindrome(char *str)
{
	char str_2[100],str_3[100];					//str_2=store the copied string,	str_3= to store the reverse string
	string_copy(str,str_2);
	string_reverse(str_2,str_3);
	
	if(string_compare(str_2,str_3)==0)
	{
		printf("\nThe given string is palindrome");
	}
	else
	{
		printf("\nThe given string is not a palindrome");
	}
	return 0;	
}
#endif

#ifdef STRING_ALPHA_ORDER_SORT_S
char string_alpha_order_sort(char *str_1)
{
	int i,j,str_len;
	char temp;
	str_len=string_length(str_1);
	printf("\nThe length of the given string is: %d",str_len);
	printf("\nThe string before sorted is: %s",str_1);
	for(i=0;i<str_len-1;i++)
	{
		for(j=i+1;j<str_len;j++)
		{
			if(str_1[i]>str_1[j])
			{
			//	char_swap(&str_1[i],&str_1[j]);				//working
				
				temp=str_1[i];
				str_1[i]=str_1[j];
				str_1[j]=temp;	
			}
		}
	}
	printf("\nThe Sorted alphabetical order of the string is: %s",str_1);
	return 0;
}
#endif

#ifdef STRING_REMOVE_EXPECT_CHAR_S
char *string_remove_expect_char(char *str)					//whenever you return the total string need to defintion/use the function pointer
{
	int i,j;
	
	for(i=0;str[i] != '\0';i++)
	{
		while(!((str[i]>='a' && str[i]<='z') || (str[i]>='A') && (str[i]<='Z') || (str[i] == '\0')   ))
		{
			for(j=i;str[j] != '\0';j++)
			{
				str[j] = str[j+1];
			}
			str[j]='\0';
		}		
	}
	printf("\nThe string after removing all characters expect alphabeets: %s",str);	
	return str;
}
#endif

#ifdef STRING_REMOVE_SPACES_S
char *string_remove_spaces(char *str)						//whenever you return the total string need to defintion/use the function pointer
{
	int i=0,j;
	int str_len;
	str_len=string_length(str);
	printf("\nThe length of the given string is: %d",str_len);
	for(i=0;i<str_len;i++)
	{
		if(str[i]==' ')
		{
			for(j=i;j<str_len;j++)
			{
				str[j]=str[j+1];
			}
			str_len--;
		}
	}

	printf("\nString after removed the space: %s",str);
	return str;	
}
#endif

#ifdef STRING_USER_DATA_CHECK
char string_user_data_check(char *str)
{
	int t=0,str_len;
	char str_get[4]="get",str_check[10]="check";
	printf("\nThe entered status will be: %s",str);
	str_len=string_length(str);
	printf("\nThe length of the status string is: %d",str_len);
	if(*str=='g')			//get
	{
		while(str[t]==str_get[t])
		{
			++t;
			//++str_get;
			if(str[t] =='\0')
			{
				printf("\nThe get is matched...");
				return 2;
				break;
			}
		}
		t=0;
		printf("\nThe get is not matched...");
		return 0;
	}
	else if(*str=='c')			//check the pointer to string once
	{
	//check
		while(str[t]==str_check[t])
		{
			++t;
			//++str_check;
			if(str[t]== '\0')
			{
				printf("\nThe check is matched...");
				return 1;
				break;
			}
		}
		t=0;
		printf("\nThe check is not matched");
		return 0;	
	}	
	//you can add whatever u need to check from the user data
	else
	{
		printf("\nUnknown data !!!");
		return 0;
	}
}
#endif

#ifdef STRING_MATCH_S
int string_match(char *str,char *temp)
{
	int string_user_temp_status;
	//get-get the listed datas, check-check the entered name in the list
	char *match_list[]={"Sivapraveen","Brindha","Selvaraj","Geetha"};

	int a,i;				//a=used to strong the string_compare return value and i for itteration
	
	string_user_temp_status=string_user_data_check(temp);
	
	printf("\nThe string_user_temp_status value for string_user_data_check function is %d",string_user_temp_status);
	if(string_user_temp_status==2)
	{
		int t;			//temp variable
		printf("\nThe listed names in the array string is given below...\n");
		for(t=0;t<=3;t++)
		{
			printf("%s",match_list[t]);
			printf("\n");
		}
		return 1;
	}
	else if(string_user_temp_status==1)
	{
		for(i=0;i<=3;i++)
		{
			a=string_compare(match_list[i],str);
			if(a==0)
			{
				printf("\nYour entered name is matching with the list");
				return 1;			//successful termination
				break;
			}
			if(a != 0)
			{
				printf("\nYour entered name is not matching with the list");
				return 1;
				break;
			}		
		}
	}
	else
	{
		printf("\nThe user need to be enter get or check in lowercase... check it ones..");
	}	
	return 0;			//this is normal return but im setted to 1 whenever the all the posibilities is over and it is completed otherwise it will return 0 but normally return 0 mean succesfull termination here i changed
}
#endif

