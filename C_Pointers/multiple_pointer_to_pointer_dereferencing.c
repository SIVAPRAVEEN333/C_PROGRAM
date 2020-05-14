#include<stdio.h>
int main()
{
    //declare all the variables with the same int declaration otherwise address will vary
    int i,*j,**k,***d,****e,*****f;
    i=3;
    j=&i;
    k=&j;
    d=&k;
    e=&d;
    f=&e;
    
    //address which was associated with the variables will be prints here
    printf("The address of i: %u\n",&i);
    printf("The address of j: %u\n",&j);
    printf("The address of k: %u\n",&k);
    printf("The address of d: %u\n",&d);
    printf("The address of e: %u\n",&e);
    printf("The address of f: %u\n",&f);
    
    //value which was associated with the variables will be prints here(its prints the beneficary address as their values)
    printf("\t\t\tThe value of i: %d\n",i);
    printf("\t\t\tThe value of j: %d\n",j);
    printf("\t\t\tThe value of k: %d\n",k);
    printf("\t\t\tThe value of d: %d\n",d);
    printf("\t\t\tThe value of e: %d\n",e);
    printf("\t\t\tThe value of f: %d\n",f);
  
    //multiple deferencing
    printf("The value at the address of i: %d\n",i);
    printf("The value at the address of j: %d\n",*j);
    printf("The value at the address of k: %d\n",**k);
    printf("The value at the address of d: %d\n",***d);
    printf("The value at the address of e: %d\n",****e);
    printf("The value at the address of f: %d\n",*****f);
    return 0;
}
