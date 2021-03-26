#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Error Log can be used by the header file called errno.h */

#include <errno.h>
extern int errno;

/* exit status in the exit() function to inform the calling function about error
 * EXIT_FAILURE = -1
 * EXIT_SUCCESS = 0
 * macors defined in stdlib.h file
 */


void main()
{
    char *ptr = malloc(10000000000000UL);
    
    /* if a file, which does not exits, is opened,
     * we will get an error */
    
    FILE *fp;
    fp = fopen("ErrorTest.txt", "r");
    
    printf("value of errno: %d !! \n", errno);
    printf("The error message is: %s !! \n", strerror(errno));
    perror("ErrorMessage From perror: ");
    
    printf("\n************************************\n");
    
    if(ptr == NULL)
    {
        puts("malloc failed !! \n");
        printf("Error no: %d !! \n", errno);
        puts(strerror(errno));
        exit(EXIT_FAILURE);
    }
    else
    {
        free(ptr);
        ptr = NULL;
        exit(EXIT_SUCCESS);
    }
}
