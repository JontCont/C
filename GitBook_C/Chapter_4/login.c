#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char username[250]=" ";
    char password[250]=" ";
    const char *user="student";
    const char *pwd="1234";
    printf("enter username & password >> \n");
    scanf("%s %s",&username,&password);
    if(strcmp(username,user)==0 && strcmp(password,pwd)==0)
    {
        printf("welcome !!");
    }
    else printf("error!!");

}