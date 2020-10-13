#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[50];
    int age;
};

//function prototype
struct student getInformation();

int main()
{
    struct student s;
    
    s= getInformation();
    
    printf("\nStudent information...");
    printf("\nStudent name: %s",s.name);
    printf("\nStudent age: %d",s.age);
    
    return 0;
}

struct student getInformation()
{
    struct student stud_1;
    
    printf("\nEnter the name: ");
    scanf("%[^\n]%*c",stud_1.name);
    printf("\nEnter age: ");
    scanf("%d",&stud_1.age);
    return stud_1;
}

