#include<stdio.h>

struct rectangle{
    int l;
    int b;
};

int valueChange(struct rectangle *p)                            //this will change the actual_parameter
{
    printf("\nEnter the new value for length: ");
    scanf("%d",&p->l);
    printf("\nEnter the new value for breadth: ");
    scanf("%d",&p->b);
    return 0;
}
int main()
{
    struct rectangle r;
    int change_temp;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&r.l);
    printf("\nEnter the breadth of the rectangle:");
    scanf("%d",&r.b);
    printf("\nThe entered length and breadth of the rectangle is: %d and %d",r.l,r.b);
    printf("\nEnter 1 to change the values 0 to exit: ");
    scanf("%d",&change_temp);
    if(change_temp==1)
    {
        valueChange(&r);   
    }
    printf("\nThe new length and breadth value of the rectangle is: %d and %d",r.l,r.b);
    return 0;
}