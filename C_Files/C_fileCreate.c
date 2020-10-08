#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    
    fptr = fopen("C:\\users\\mahes\\desktop\\SampleProgram.txt","w");
    
    if(fptr==NULL)
    {
        printf("\nThe file is not created check the location... ");
        exit(1);
    }
    printf("Enter the first number: ");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    printf("Enter the second number: ");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    
    printf("\nScanning the file: ");
    if((fptr=fopen("C:\\users\\mahes\\desktop\\SampleProgram.txt","r"))==NULL){
        printf("\nError opening a file... ");
    }
    fscanf(fptr,"%d",&num);
    printf("Value of the num: %d",num);
    fclose(fptr);
}
