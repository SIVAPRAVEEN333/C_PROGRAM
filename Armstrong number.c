#include<stdio.h>

int n,t1,t2,t3,t4,temp;
int cube(int a);
int t;
int cube1,cube2,cube3,cube4,result;
int main()
{
	printf("Enter the number to check whether its a armstrong or not:");
	scanf("%d",&n);
	temp=n;
	

		t1=(n/1000)%10;
		t2=(n/100)%10;
		t3=(n/10)%10;
		t4=(n%10);		

	
	cube1=cube(t1);
	cube2=cube(t2);
	cube3=cube(t3);
	cube4=cube(t4);
	
	result=cube1+cube2+cube3+cube4;
	
	if(temp==result)
	{
		printf("Its an armstrong number");
	}
	else
	{
		printf("Its not an armstrong number");
	}
}

int cube(int a)
{
	t=a*a*a;
	return t;	
}
