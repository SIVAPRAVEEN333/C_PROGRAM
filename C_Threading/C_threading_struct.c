/*
    @Name: Threading_c.c
    @Author: Sivapraveen S
    @Date: 23.03.2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

typedef struct 
{
    int *ar;
    long n;
}sub_str;

void incer(void *arg)
{
    long i;
    
    for(int i=0;i<((sub_str *)arg)->n;i++)
    {
        int temp_value=((sub_str*)arg)->ar[i];
        printf("\nValue of i=%d, ar[%d] value will be: %d",i,i,temp_value);
        ((sub_str *)arg)->ar[i]++;
    }
}

int main()
{
    int ar[1000000];
    pthread_t th1,th2;
    sub_str sb1,sb2;
    
    sb1.ar=&ar[0];
    sb1.n=100;
    (void)pthread_create(&th1,NULL,incer,&sb1);
    
    sb2.ar=&ar[10];
    sb2.n=100;
    (void)pthread_create(&th2,NULL,incer,&sb2);
    
    (void)pthread_join(th1,NULL);
    (void)pthread_join(th2,NULL);
    
    return 0;
}

