#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char data[50];
    file = fopen("textFileToRW.txt","r");
  
    if(file == NULL)
    {
        printf("files cannot be opened, check the file/file location");
    }
    else
    {
        printf("file is open");
    }
    while(fgets(data,50,file) !=NULL)
    {
        printf("%s",data);
        printf("\nData was successfully read from the file");
    }
    int close_status=fclose(file);
    if(close_status == 0)
    {
        printf("\nfile is now closed...");
    }
    else
    {
        printf("file is not closed");
    }
    
    return 0;
}
