#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ID="student";
    char *password="adcd";
    char ID_type[20];char pwd_type[20];
    printf("username :\n");
    scanf("%s",&ID_type);
    printf("password :\n");
    scanf("%s",&pwd_type);

    if(strcmp(ID_type,ID)==0 && strcmp(pwd_type,password)==0)
        printf("welcome!!");
    else
        printf("error!!");
    
    
}