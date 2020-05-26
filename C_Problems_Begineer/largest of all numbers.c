#include<stdio.h>

int a,b,c;
void main()
{
	printf("Enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	printf("a is largest number which holds %d",a);
	else if(b>a && b>c)
	printf("b is largest numnber which holds %d",b);
	else if(c>a && c>b)
	printf("c is largest numnber which holds %d",c);
	
	return 0;
	
}
