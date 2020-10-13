#include<stdio.h>
#include<stdlib.h>

typedef struct compl
{
    int real;
    int img;
}complex;

void addNumbers(complex c1,complex c2,complex *result);

int main()
{
    complex c1,c2,result;
    
    printf("\nProceeding first part...");
    printf("\nEnter real part: ");
    scanf("\n%d",&c1.real);
    printf("\nEnter img part: ");
    scanf("\n%d",&c1.img);
    
    printf("\nProceeding second part...");
    printf("\nEnter real part: ");
    scanf("\n%d",&c2.real);
    printf("\nEnter img part: ");
    scanf("\n%d",&c2.img);
    
    addNumbers(c1,c2,&result);
    
    printf("\nThe result: ");
    printf("\nthe real: %d",result.real);
    printf("\nthe img: %d",result.img);
    
    return 0;
}

void addNumbers(complex c1,complex c2,complex *result)
{
    result->real=c1.real+c2.real;
    result->img=c1.img + c2.img;
}

o
