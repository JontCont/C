#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct member
{
    char username[250];
    char password[250];
}meb;

int main ()
{
    int index = 0;
    char user[250] = " ";
    char pwd[250] = " ";
    int num;
    while (1)
    {
    printf("enter only number :\n");
    printf("1. sign up       2.sign in\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("--sign up--\n");
        printf("enter username & password >>\n");
        scanf("%s %s",&meb.username,&meb.password);
        break;
    default:
        printf("error");
        break;
    case 2:

        printf("--sign in--\n");
        printf("enter username & password >>\n");
        scanf("%s %s",&user,&pwd);
        if(strcmp(meb.username,user)==0 && strcmp(meb.password,pwd)==0) 
        {
            printf("welcome !!\n");
            index++;
        }
        else printf("warring !!\n");
        
        break;
    }
    if(index == 1) break;
    }//while(1)
}
