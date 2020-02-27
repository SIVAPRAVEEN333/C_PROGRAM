#include<stdio.h>
int n1,n2;
int a[100],b[100],c[100];
int main()
{
	printf("Enter the Array A size: ");
	scanf("%d",&n1);
	printf("\nEnter the Arrya B size: ");
	scanf("%d",&n2);
	
	printf("\nEnter the elements of Array A: ");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",a[i]);
	}
	printf("\nEnter the elements of Array B: ");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",b[i]);	
	}
	printf("\nThe elements of Array A is: ");
	for(int i=0;i<n1;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nThe elements of Array B is: ");
	for(int i=0;i<n2;i++)
	{
		printf("%d\t",b[i]);
	}
	
	
	return 0;
	
}
