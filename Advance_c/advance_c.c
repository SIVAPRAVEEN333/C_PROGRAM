

#include <stdio.h>
#include <stdlib.h>

#pragma startup fun             // only work on some complier/hardware

void fun()
{
    printf("Function executing before main !! \n");
}

/* executing Function before main !! */

void funcBeforeMain(void) __attribute__ ((constructor));

void funcBeforeMain()
{
    printf("\n***********************************************\n");
    printf("Function executing before main !!");
    printf("\n***********************************************\n");
}

/* executing Function after main !! */

void funcAfterMain(void) __attribute__ ((destructor));

void funcAfterMain()
{
    printf("\n***********************************************\n");
    printf("cleanup code after main !!");
    printf("\n***********************************************\n");
}

int main()
{
    /* without variable in the printf statement it prints the garbage value !! */
    printf("%d \n");                //gives warning !!
    
    /* printf returns, n number chars printed, it can also return 0 incase of early matching failure !! */
    int print_cnt =0;
    print_cnt = printf("Sivapraveen S \n");
    printf("size of the name: %d !! \n", print_cnt);
    
    /* to print % use %% to display % in side the statement */
    printf("He got 93%% in maths !! \n");

    /* free a block of memory previously allocated without using free */
    char* mem;
    mem = (char*) malloc(100*sizeof(char));     //allocating 100 memory blocks for 'mem'
    
    /* note: while printing the size of assined mem block it will print the int/char pointer siz
    size eg: mem char/int/float whatever the size of pointer will be 4/8 depends upon the 
    complier */

    mem = realloc(mem, 0);        // memory will be released, it will return the new location in memory, needs to 
                            // resuse otherwise it will gives u warning !!
    /* use of %n in printf */
    {
        int temp;
        printf("Hi %n world !! \n", &temp);
        printf("Known Size of entered word bofore %% n: %d !! \n", temp);
    }

    /* 3 swaping methods */
    /* first method */
    {
        int a = 1, b = 11;
    
        a = a + b;
        b = a - b;
        a = a- b;
    
        printf("after swap[1M]> a: %d, b: %d !! \n", a, b);
    }
    /* second method */
    {
        int a = 1, b = 11;
        
        a ^= b;
        b ^= a;
        a ^= b;
        printf("after swap[2M]> a: %d, b: %d !! \n", a, b);
    }
    /* third method */
    {
        int a = 1, b = 11;
        int temp;
        
        temp = a;
        a = b;
        b = temp;
        
        
        printf("after swap[3M]> a: %d, b: %d !! \n", a, b);
        
    }
    
    /* knowing the size of structures !! */
    typedef struct 
    {
        unsigned char c1:3;
        unsigned char c2:4;
        unsigned char c3:1;
    }data_1_t;
    
    typedef struct
    {
        unsigned char c1:3;
        unsigned char :0;
        unsigned char c2:4;
        unsigned char c3:1;
    }data_2_t;
    
    typedef struct
    {
        unsigned char c1;           //1 bytes
        int c2;                     //4 bytes
        unsigned char c3[100];      //100 bytes
        int c4[100];                //400 bytes    
    }data_3_t;                      // total 1 + 4 + 100 + 400 = 505, while in struct mem allocation will be different somewhat
                                    // it will take large block of memory even when not in use. refer: struct memory allocation
    
    
    printf("size of struct(data_1): %lu !! \n", sizeof(data_1_t));
    printf("size of struct(data_2): %lu !! \n", sizeof(data_2_t));
    printf("size of struct(data_3): %lu !! \n", sizeof(data_3_t));
    
    /* rvalue - right value && lvalue - left value */
    
    /* converting string to int value has 2 methods */
    /* first method !! */
    char str_1[10] = "1234";
    int i = atoi(str_1);
    printf("str_1: %s | int i: %d !! \n", str_1, i);
    
    /* second method- scanf method need to check !! */
    
    /*
     * prevent same header file getting included multiple times 
     * We can use ifndef and define preprocessors. Say the header file is hdrfile.h, then we can write the header file like -
     *  #ifndef _HDRFILE_H_
        #define _HDRFILE_H_
            statement needs to excute !!
        #endif
     */

    /* finding the system enidaness */
    
    union endian_t
    {
        unsigned int i;
        unsigned char c[2];
    };
    
    
    
    return 0;
}


#define NOT_TO_EXCUTE_OR_COMPILE 0

#if NOT_TO_EXCUTE_OR_COMPILE

#1. Difference between const char* p and char const* p ?
    
    const char* p:
        character pointed by pointer variable p is constant. This value
    cannot be changed but we can initialize p with other memory location. 
    It means the character pointed by p is constant but not_ po. in 
    
    char const* p:
        pointer p is constant not_ the character referenced by it.
        so we can't assing p with other location but we can change the value
        of the character pointed by p.
#2. what is the point of using_ malloc(0)?
    
    According to c standard, “ If the size of the space requested is zero,
    the behavior is implementation defined: either a null pointer is returned, 
    or_ the behavior is as if_ the size were some nonzero value, except that
    the returned pointer shall not be used to access an object”. But there is a benefit of this. 
    The pointer return_ after malloc(0)_ will be valid pointer and_ can be deallocated
    using_ free()_ and_ it will not_ crash the program.
    
#3. what is function pointer?
    
    Function pointer, as the name suggests, points to a function. We can declare a function pointer and 
    point to a function. After that using that function pointer we can call that function
    eg:
    #include<stdio.h>
    void Hello();
    typedef void (*FP)();
    
    FP fun(int);
    
    main()
    {
    FP (*ptr)(int) = NULL;
    FP p;
    ptr = fun;
    p = (*fun)(30);
    (*p)();
    }
    
    void Hello()
    {
    printf("Hello\n");
    }
    
    FP fun(int a)
    {
    FP p = Hello;
    printf("Number is : %d\n", a);
    return p;
    }

#4. indirection in c?
    
    when we use variable name to access the value it is direct value it is direct access.
    if we use pointer to get the variable value, it is called indirection.
    

#endif


