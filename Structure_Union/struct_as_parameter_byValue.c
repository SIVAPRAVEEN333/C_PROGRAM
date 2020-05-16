#include<stdio.h>

struct rectangle{
    int l;
    int b;
};

int areaOfRect(struct rectangle r)
{
    int area=r.l*r.b;
    return area;
}
int main()
{
    struct rectangle r;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&r.l);
    printf("\nEnter the breadth of the rectangle:");
    scanf("%d",&r.b);
    int area=areaOfRect(r);
    printf("\nThe area of the rectangle: %d",area);
    return 0;
}