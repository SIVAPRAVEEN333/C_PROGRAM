#include<stdio.h>
int main()
{
    int element_terms,first=0,second=1,n_element;
    printf("Enter the number of terms: ");
    scanf("%d",&element_terms);
    printf("The fibbinoci series for the %d terms: ",element_terms);
    for(int i=0;i<element_terms;i++)
    {
        if(i<=1)
        n_element=i;
        else
        {
            n_element=first+second;
            first=second;
            second=n_element;
        }
        printf("%d\n",n_element);
    }
    return 0;
}
