#include<stdio.h>


int b;
int rem,sum;
int main()
{
	
	char s[1000],r[1000];
	printf("enter the string");
	gets(s);
	int start,end,count=0;
	
	while(s[count]!=0)
	count++;
	
	end=count-1;
	
	for(start=0;start<count-2;start++)
	{
		r[start]=s[end];
		end--;
	}
	
	r[start]='\0';
	printf("%s\n",r);
	return 0;
	
	return 0;
	
	
	
		
}
