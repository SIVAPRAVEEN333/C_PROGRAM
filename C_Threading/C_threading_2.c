/*
    @Name: Threading_c.c
    @Author: Sivapraveen S
    @Date: 23.03.2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void fun1_thread(void *val)
{
    printf("\nhello from second thread...");
    int *num_thread=(int *)val;
    printf("\nThe value which was passed through argument from thread_1 will be %d",*num_thread);
    return NULL;
}

int main()
{
    pthread_t thread;
    printf("\nhello from first thread");
    int num_1=11;
    int num_2=33;
    pthread_create(&thread, NULL, fun1_thread,&num_2 );
    printf("\nwaits till thread complete..");
    pthread_join(thread,NULL);
    return NULL;
}

