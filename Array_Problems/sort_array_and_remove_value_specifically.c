#include<stdio.h>
#include<stdlib.h>

struct num{
    
}

int a[10]={1,2,3,4,5,6,7,8,9,10};
int main()
{
    int j;
    int remove_value,size;          //size=array_size
    size=sizeof(a)/sizeof(a[0]);
    printf("\nThe size of the array before sorted: %d",size);
    printf("\nenter the number to remove in the array: ");
    scanf("%d",&remove_value);
    for(int i=0;i<size;i++)
    {
        if(a[i]==remove_value)
        {
            a[i]=0;
            size--;
            for(j=i;j<size;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    printf("\nThe array after sorted: ");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}