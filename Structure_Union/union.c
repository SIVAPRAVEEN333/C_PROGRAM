#include<stdio.h>
#include<string.h>

union val{
	int num;
	char a;
	float b;
	char c[20];
}s1,s2;


int main()
{
	s1.num=10;
	s2.num=20;
	s1.a='s';
	s2.a='p';
	s1.b=5.2;
	s2.b=5.2;
	strcpy(s1.c,"Sivapraveen");
	strcpy(s2.c,"Selvaraj");					/* Here s1.c & s2.c are overwrited the data in memory of all other varibale because of union    */
	
printf("The s1 values are %c\n",s1.a);
printf("The s1 values are %f\n",s1.b);
printf("The s1 values are %s\n",s1.c);
printf("The s1 values are %d\n",s1.num);

printf("The s1 values are %c\n",s2.a);
printf("The s1 values are %f\n",s2.b);
printf("The s1 values are %s\n",s2.c);
printf("The s1 values are %d\n",s2.num);
	
	
}
