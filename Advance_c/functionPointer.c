#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int funcA(int *);
int funcB(int *);
int funcC(int *);

int main()
{
    int num = 2;
    
    void (*p[])(int *) = {funcA, funcB, funcC};
    
    for(int idx = 0; idx < 3; idx ++)
    {
        p[idx](&num);
        printf("%d !! \n", num);
        if(idx == 1)
        {
            printf("Num: %d !! \n", num);
            num = 2;
        }
    }

    return 0;
}
int funcA(int *a)
{
    *a = *a * *a;
}

int funcB(int *b)
{
    *b = *b * *b * *b;
}

int funcC(int *c)
{
    *c = *c * *c * *c * *c;
}





