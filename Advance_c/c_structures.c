#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOT_TO_EXCUTE_OR_COMPILE 0
/* 1. both are user-defined data types used to store data of different types as a single unit. 
 * 2. Their members can be objects of any type, including other struct and unions or arrays. 
 *    A members can also consist of a bit field.
 * 3. both structures and unions support only assignment = and size of operators. 
 *    The two structures or unions in the assignment must have the same members and 
 * 4. A structures or a union can be passed by value to functions and returned by value of functions.   
 *    The argument must have the same type as the function parameter. A structure or 
 *    union is passed by value just like a scalar variable as a corresponding parameter
 * 5. "." operator is used for accessing members and in case of using pointer inside the struct we can use "->"
 */

/*
 * 1. keyword :- 
 *    structure :   struct
 *    union     :   union
 * 2. Size :-
 *    structure : when a variable is associated with a structure, the complier allocates the memory for
 *                each member. The size of the structure is greater than or equal to the sum of sizes of 
 *                its members. [refer: memory for structure, its identical!!]
 *    union     : when a variable is associated with a union, the complier allocates the memory by 
 *                considering the size of the largest memory. so, size of union is equal to the size of 
 *                largest member.
 * 3. Memory :-
 *    structure : Each member within a structure is assingned unique storage area of location.
 *    union     : Memory allocated is shared by individual members of union.
 *
 * 4. Value altering :- 
 *    structure : altering the value of the member will not affect the other members of the structure.    
 *    union     : altering the value any of the member will alter other member values. 
 * 
 * 5. accessing member :-
 *    structure : individual member can be accessed at a time.
 *    union     : only one member can be accessed at a time.
 *
 * 6. Initilization :-
 *    structure : Several members of a structure can Initilize at once.
 *    union     : only the first member of a union can be Initilized.
 */
 
//declaring structure
struct data_s
{
    int a;
    char b;
    unsigned int c[10];
    unsigned char d[10];
    float decimal;
};

//declaring union
union data_u
{
    int a;
    char b;
    unsigned int c[10];
    unsigned char d[10];
    float decimal;
};
 
 
/* typedef <exisiting-type> <alias> */ 
typedef struct
{
    int a;
    char b;
    float c;
    unsigned char d[33];
}data_set_t;


/* nested structures */
typedef struct
{
    unsigned int clg_id;
    char clg_name[100];
}stud_clg_details_t;

typedef struct
{
    int id;
    char name[20];
    float percentage;
    stud_clg_details_t students;
}stud_data_t;

int print_struct(int id, char name[], float percentage, unsigned int clg_id, char clg_name[])
{
    printf("\n***********************************************************************\n");
    printf("accessing structure in print_struct func !!");
    printf("accessing nested structure using pointer variable[4M] :- \n");
    printf("student_d Id: %d !! \n", id);
    printf("student_d Name: %s !! \n", name);
    printf("student_d percentage: %.2f !! \n", percentage);
    printf("student_d college Id: %d !! \n", clg_id);
    printf("student_d college Name: %s !! \n", clg_name);
    
    return 1;
}

int main()
{
    struct data_s s = {1, 's', {0}, "hello", 4.5};    
    s.c[0] = 1;
    s.c[1] = 2;
    s.c[2] = 3;
    
    union data_u u;
    
   // union data_u u = {1, 's', {0}, "hi", 4.5};
    
    //accessing individually, only one member can acces at a time !!
    //u.a = 1;
    //u.b = 's';
    //u.c[0] = 7;
    //u.c[1] = 6;
    //u.c[2] = 5;
    //u.c[3] = 4;
    //strcpy(u.d, "hi");
    // u.decimal = 4.5;

    printf("structure data:- \n");
    printf("int a: %d \nchar b: %c \nunsigned int c[0]: %d, c[1]: %d, c[2]: %d \nunsigned char d: %s \nfloat decimal: %f !! \n", s.a, s.b, s.c[0], s.c[1], s.c[2], s.d, s.decimal);

    printf("union data:- ");
    printf("only one member can be accessed !! \n");
    //printf("int a: %d \nchar b: %c \nunsigned int c[0]: %d, c[1]: %d, c[2]: %d \nunsigned char d: %s \nfloat decimal: %f !! \n", u.a, u.b, u.c[0], u.c[1], u.c[2], u.d, u.decimal);

    //accessing structure using typedef
    data_set_t data_set_1;
    data_set_1.a = 1;
    data_set_1.b = 's';
    data_set_1.c = 4.5;
    strcpy(data_set_1.d, "Sivapraveen S");
    
    printf("printing members of the structure using typedef:- \n");
    
    printf("a: %d \nb: %c \nc: %f \nd: %s \n", data_set_1.a, data_set_1.b, data_set_1.c, data_set_1.d);
    
    printf("\n***********************************************************************\n");

#if NOT_TO_EXCUTE_OR_COMPILE

    /* Nested structure 
     * two common ways to access structure inside the structure
     * 1. structure within structure in c using normal variable 
     * 2. structure within structure in c using pointer variable
     */
#endif     
     
     /* nested structure */
    /* assinging in one time */ 
    stud_data_t student_1 = {1, "Sivapraveen S", 90.5, 17025, "PSG"};
    
    printf("accessing nested structure using normal variable[1M] :- \n");
    printf("student_1 Id: %d !! \n", student_1.id);
    printf("student_1 Name: %s !! \n", student_1.name);
    printf("student_1 percentage: %f !! \n", student_1.percentage);
    printf("student_1 college Id: %d !! \n", student_1.students.clg_id);
    printf("student_1 college Name: %s !! \n", student_1.students.clg_name);
    
    /* assinging seperatly */
    stud_data_t student_2;
    
    student_2.id = 2;
    strcpy(student_2.name, "sathish");
    student_2.percentage = 11;
    student_2.students.clg_id = 17026;
    strcpy(student_2.students.clg_name, "PSG");
    printf("\n***********************************************************************\n");

    printf("accessing nested structure using normal variable[2M] :- \n");
    printf("student_2 Id: %d !! \n", student_2.id);
    printf("student_2 Name: %s !! \n", student_2.name);
    printf("student_2 percentage: %f !! \n", student_2.percentage);
    printf("student_2 college Id: %d !! \n", student_2.students.clg_id);
    printf("student_2 college Name: %s !! \n", student_2.students.clg_name);
    
    stud_data_t *student_3;
    
    student_3 = (stud_data_t*)malloc(1*sizeof(stud_data_t));    //allocating memory dynamically !!

    //student_3 = &student_2;           //this copies the old entries !!
    student_3->id = 3;                  //this applyies new entries !!
    strcpy(student_3->name, "Manoj");
    student_3->percentage = 91;
    student_3->students.clg_id = 17027;
    strcpy(student_3->students.clg_name, "PSG");
    

    printf("\n***********************************************************************\n");

    printf("accessing nested structure using pointer variable[3M] :- \n");
    printf("student_3 Id: %d !! \n", student_3->id);
    printf("student_3 Name: %s !! \n", student_3->name);
    printf("student_3 percentage: %f !! \n", student_3->percentage);
    printf("student_3 college Id: %d !! \n", student_3->students.clg_id);
    printf("student_3 college Name: %s !! \n", student_3->students.clg_name);   //use student_3->students->clg_name for using nested pointer structure pointing !!

                
    free(student_3);
    student_3 = NULL;
    
    /* passing structure member as argument to the function */
    printf("Passing structure member as argument to the function !! \n");
    
    int sts;
    sts = print_struct(student_2.id, student_2.name, student_2.percentage, student_2.students.clg_id, student_2.students.clg_name);
    if(sts == 1)
        printf("done !! \n");
    else
        printf("not done !! \n");
    
    
    
    
    
    return 0;    
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
