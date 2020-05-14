#include<stdio.h>

typedef struct{
    char name[20];
    int number;
    int rank;
}person;

int main()
{
    int n;
    
    person *ptr;
    
    printf("Enter the number of students: ");
    scanf("%d",&n);
    ptr=(person*)malloc(n*sizeof(person));
    
    for(int i=0;i<n;i++)
    {
        int temp=i+1;
        printf("\nEnter the name of %d student: ",temp);
        scanf("%s",(ptr+i)->name);
        printf("\nEnter the roll_no and rank of the student %d: ",temp);
        scanf("%d%d",&(ptr+i)->number,&(ptr+i)->rank);
    }
    
    printf("\nThe Details of %d Students",n);
    for(int i=0;i<n;i++)
    {
        int temp=i+1;
        printf("\nStudent %d",temp);
        printf("\nName: %s,\tRoll_No: %d,\tRank: %d",(ptr+i)->name,(ptr+i)->number,(ptr+i)->rank);
    }
}
