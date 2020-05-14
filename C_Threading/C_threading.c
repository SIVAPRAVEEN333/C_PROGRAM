#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define thread_value 5
int *print_thread(void *thread_p_count)
{
    int thread_count=thread_p_count;
    printf("Hello world...Thread id: %d\n",thread_count);
    pthread_exit(NULL);
}

int main()
{
    pthread_t Threads[thread_value];
    int rc;
    for(int i=0;i<thread_value;i++)
    {
        printf("main(): creating thread...%d\n",i);
        
        rc=pthread_create(&Threads[i],NULL,print_thread,(void *)i);
        if(rc)
        {
            printf("Error in creating the thread...\n");
            exit(-1);
        }
    }
    pthread_exit(NULL);
    
    
}
