#include<stdio.h>
int n,a=0,b=1,sum=0;
int main()
{
	printf("Enter the n number of fibinacci series:");
	scanf("%d",&n);
	
	while(n>0)
	{
		printf("%d\t",a);
		sum=a+b;
		a=b;
		b=sum;
		--n;
		if(n==0)
		break;
	}	
	
	
	
}
