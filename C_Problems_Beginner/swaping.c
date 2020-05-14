#include <stdio.h>
  int m,n,temp;
int main()
{
  
    printf("Enter the two numbers to swap:");
    scanf("%d%d",&m,&n);
    temp=m;
    m=n;
    n=temp;
    printf("nThe swaped values are:m=%d, n=%d",m,n);
        return 0;
}
