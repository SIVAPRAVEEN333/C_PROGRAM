#include<stdio.h>

#define value 5
#define firstname "Siva"
#define lastname "praveen"

#ifndef message
    #define message "Hi"
#endif

//macro continuation
#define message_for(a,b)    \   
    printf(#a#b "is my full name\n")
    
//token Pasting
#define tokenpaster(n) printf("token " #n "is: %d",token##n)

//defined operator
#if !defined (MESSAGE_1)
    #define MESSAGE_1 "AllTheBest"
#endif

//parameterized macros
#define sqaure(x) ((x) * (x))

int main()
{
    printf("\nThe defined value is :%d",value);
    printf("\nThe Name:%s%s",firstname,lastname);
    printf("\nThe defined message is: %s",message);
    printf("\n***Predefined Preprocessor***");
    printf("\n The current time: %s",__TIME__);
    printf("\n The current date: %s",__DATE__);
    printf("\n The filename: %s",__FILE__);
    printf("\n The line number: %d",__LINE__);
   
    printf("\nFullname displaying...");
    message_for(Siva,praveen);
    
    printf("\n***Token Pasting...***\n");
    int token33=3;
    tokenpaster(33);
    
    printf("\nHere is the message: %s",MESSAGE_1);
    printf("\nEnter a number to sqare: ");
    int sq;
    scanf("%d",&sq);
    printf("\nSquare of a nun: %d",sqaure(sq));
    
    return 0;
    
}


