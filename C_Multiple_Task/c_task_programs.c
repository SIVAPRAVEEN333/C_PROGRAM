/*
1. Program to print text
2.Program To Read Two Numbers And Print The Sum Of Given Two Numbers.
3.Program To Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print it.
4.Program To Read Three Numbers And Print The Biggest Of Given Three Numbers
5.Program To Read A Number And Find Whether The Given Number Is Even Or Odd.
6.Program to accept a year and check whether the given year IS leap year or not.
7.Individual Digits
8. Program to accept a three digit number and print the sum of individual digits.
9. Program to accept a number and check the given number is Armstrong or not.
10. Program to print ODD numbers from 1 to 10
11. Program to print natural numbers from 1 to 10 in Reverse
12. Program to print sum of the natural numbers from 1 to 10.
13. Program to accept a number and print mathematical table of the given no.
14. Program to print 1 to 10 mathematical tables .
15. Program to print fibonacci series .
16. Program to print numeric pyramid
*/



#include<stdio.h>
#include<string.h>
int print_text(char text[]);
int print_text_using_function(char text[]);
int sum_of_2_num();
int student_avr_tot();
int biggest_of_all_number();
int even_odd_fun();
int leap_year_fun();
int split_individual_digits();
int sum_of_individual_digits();
int armstrong_number();
int cube(int a);
int print_odd_numbers();
int natural_numbers_fun();
int sum_of_n_natural_numbers();
int print_n_maths_table();
int print_1to10_maths_table();
int fibinacci_series_fun();

typedef struct
{
    char name[50];
    int roll_no;
    int marks[3];
    int total;
    int average;
}student_status;

  
int main()
{
    char text[100];
    printf("\n\t\t\t***1.Program to print the text***\t\t\t");
    printf("\nEnter the text to print: ");
    scanf("%s",text);
    print_text(text);
   // sum of given two Numbers
    sum_of_2_num();
    //student total and average
    student_avr_tot();
   // biggest_of_all_number
    biggest_of_all_number();
    even_odd_fun();
    leap_year_fun();
    split_individual_digits();
    sum_of_individual_digits();
    armstrong_number();
    print_odd_numbers();
    natural_numbers_fun();
    sum_of_n_natural_numbers();
    print_n_maths_table();
    print_1to10_maths_table();
    fibinacci_series_fun();
    return 0;
}

int print_text(char text[])
{
    printf("\nEntered text is %s",text);
    return 0;
}

int sum_of_2_num()
{
    printf("\n\t\t\t***Sum of Given two number***\t\t\t\n");
    int num1,num2,sum;
    printf("\nEnter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("\nEntered two numbers is: %d and %d",num1,num2);
    sum=num1+num2;
    printf("\nThe sum of the given two number will be: %d",sum);
    return 0;
}

int student_avr_tot()
{
    printf("\n\t\t\t***Student marks of total and average details***\t\t\t");
    int n;
    static student_status student[100];         
    printf("\nEnter the number of student: ");          //Enter the value respect to number of student details you need
    scanf("%d",&n);
    //student=( student_status*)malloc(n*sizeof( student_status));
    
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the student name and roll no: ");
        scanf("%s%d",student[i].name,&student[i].roll_no);
        printf("\nEnter the Subject 1 mark: ");
        scanf("%d",&student[i].marks[0]);
        printf("\nEnter the Subject 2 mark: ");
        scanf("%d",&student[i].marks[1]);
        printf("\nEnter the Subject 3 mark: ");
        scanf("%d",&student[i].marks[2]);
        //total
        student[i].total=student[i].marks[0]+student[i].marks[1]+student[i].marks[2];
        student[i].average=student[i].total/3;
    
        printf("\nThe Student name is %s and roll_no is %d ",student[i].name,student[i].roll_no);
        printf("\nThe respective entered marks for Subject_1, Subject_2, Subject_3 is %d\t%d\t%d\t",student[i].marks[0],student[i].marks[1],student[i].marks[2]);
        printf("\nThe total of three subject is %d",student[i].total);
        printf("\nThe average of total marks is %d",student[i].average);
        
        
    }
    return 0;

}

int biggest_of_all_number()
{
    int num_1,num_2,num_3;
    int big;
    printf("\n\t\t\t***Biggest of all number***\t\t\t\n");
    printf("\nEnter the 1st number: ");
    scanf("%d",&num_1);
    printf("\nEnter the 2nd number: ");
    scanf("%d",&num_2);
    printf("\nEnter the 3rd number: ");
    scanf("%d",&num_3);
    if(num_1>num_2 && num_1>num_3)
    printf("\nThe Biggest number of all three is: %d",num_1);
    if(num_2>num_1 && num_2>num_3)
    printf("\nThe Biggest number of all three is: %d",num_2);
    if(num_3>num_1 && num_3>num_2)
    printf("\nThe Biggest number of all three is: %d",num_3);
    if(num_1==num_2)
    printf("\nThese two first(%d) and second(%d) number is equal",num_1,num_2);
    if(num_2==num_3)
    printf("\nThese two second(%d) and third(%d) number is equal",num_2,num_3);
    if(num_3==num_1)
    printf("\nThese two frist(%d) and third(%d) number is equal",num_1,num_3);
    if(num_1 ==num_2 && num_1 ==num_3 && num_2==num_3)
    printf("\nAll three number are equal...");
    
    return 0;   
}

int even_odd_fun()
{
    int n;
    int *num;
    printf("\n\t\t\t***Even or Odd Function***\t\t\t");
    printf("\nEnter how many numbers to find its an Even or Odd: ");
    scanf("%d",&n);
    num=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        int status;
        int temp=i+1;
        printf("\nEnter the %d number: ",temp);
        scanf("%d",num+i);
        status=*(num+i);
        status=status%2;
        if(status==NULL)
        printf("The %d number(%d) is Even number",temp,*(num+i));
        if(status!=NULL)
        printf("The %d number(%d) is odd number",temp,*(num+i));
    }
    return 0;
}

int leap_year_fun()
{
    int status;
    printf("\n\t\t\t***To find the year is leap year or not***\t\t\t");
    printf("\nEnter the year to find leap year no not: ");
    scanf("%d",&status);
    if((status%100 !=0 && status %4 ==0) || (status %400 == 0))
    printf("\nThe entered year is a leap year...");
    else
    printf("\nThe entered year is not a leap year...");
    return 0;
}

int split_individual_digits()
{
    int number,temp;
    printf("\n\t\t\t***Program to split the individual number or digits***\t\t\t");
    printf("\nEnter the Number to split (enter the digit which contains more than one digits): ");
    scanf("%d",&number);
    
    while(number>0)
    {
        temp=number%10;
        printf("%d\n",temp);
        number/=10;
    }
    return 0;
}

int sum_of_individual_digits()
{
    int number,temp=0,sum=0;            //make sum=0 because it is a local variable it contains some default value so we need make as zero
    printf("\n\t\t\t***To Display Sum of sum_of_individual_digits***\t\t\t");
    printf("\nEnter the three digit number(it will also work for any digit number): ");
    scanf("%d",&number);
    printf("\nEntered numbered is %d",number);
    
    while(number!= 0)
    {
        temp=number%10;
        sum=sum+temp;
        number/=10;
    }
    printf("\nThe Sum of the individual digits is %d",sum);
    return 0;
}


int armstrong_number()
{
    int n,t1,t2,t3,t4,temp;
    int cube(int a);
    int t;
    int cube1,cube2,cube3,cube4,result;
	printf("\nEnter the number to check whether its a armstrong or not:");
	scanf("%d",&n);
	temp=n;
		t1=(n/1000)%10;
		t2=(n/100)%10;
		t3=(n/10)%10;
		t4=(n%10);		
    	cube1=cube(t1);
	    cube2=cube(t2);
	    cube3=cube(t3);
	    cube4=cube(t4);
	result=cube1+cube2+cube3+cube4;
	
	if(temp==result)
	{
		printf("Its an armstrong number");
	}
	else
	{
		printf("Its not an armstrong number");
	}
}

int cube(int a)
{
    int t;
	t=a*a*a;
	return t;	
}


int print_odd_numbers()
{
    int n_choice=0;
    printf("\nPress 1 to print odd number based on user input or Press 0 for to print 1 to 10 odd numbers: ");
    scanf("%d",&n_choice);
    if(n_choice==0)
    {
        printf("\n\t\t\t***Program to print Odd number from 1 to 10***\t\t\t");
        printf("\nThe odd numbers from 1 to 10: "); 
        for(int i=0;i<=10;i++)
        {
            if(i%2 !=0)
            printf("%d\t",i);
        }
    }
    if(n_choice==1)
    {
        int n;
        printf("\n\t\t\t***Program to print Odd number from 1 to n***\t\t\t");
        printf("\nEnter the odd number limit: ");
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
        {
            if(i%2 !=0)
            printf("%d\t",i);
        }
    }
    return 0;
}

int natural_numbers_fun()
{
    int n=10;
    printf("\n\t\t\t***Program to list Natural number in reverse order***\t\t\t");
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}
int sum_of_n_natural_numbers()
{
    int n=10;
    int temp,sum=0;
    printf("\n\t\t\t***Sum of natural numbers from 1 to 10***\t\t\t");
    //int n_temp=n;
    while(n>=1)
    {
        sum=sum+n;
        n--;
    }
    printf("\n");
    printf("\nThe Sum of natural numbers from 1 to 10 is: %d",sum);
    
}

int print_n_maths_table()
{
    int n_table;
    int n=1;
    printf("\n\t\t\t***To print N mathematical tables***\t\t\t");
    printf("\nEnter the Table number to print: ");
    scanf("%d",&n_table);
    printf("\nThe %d Table will be displayed here",n_table);
    while(n<=10)
    {
        printf("\n%d x %d = %d\n",n_table,n,n_table*n);
        n++;
    }
    return 0;
}

int print_1to10_maths_table()
{
    int n=1;
    printf("\n\t\t\t***To print 1 to 10 mathematical tables***\t\t\t");
    for(int j=1;j<=10;j++)
    {
        for(int i=1;i<=10;i++)
        {
            n=1;
            while(n<=10)
            {
                printf("\n%d x %d = %d\n",j,n,j*n);
                n++;
            }  
        }
    }
  
    return 0;
}


int fibinacci_series_fun()
{
    int n,a=0,b=1,sum=0;
	printf("\nEnter the n number of fibinacci series:");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d\t",a);
		sum=a+b;
		a=b;
		b=sum;
		--n;
		if(n==0)
		break;
	}	
}

