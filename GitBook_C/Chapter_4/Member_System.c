#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    int index = 0;
    char user[250] = " ";
    char pwd[250] = " ";
    char user_input[250]=" ";
    char pwd_input[250]=" ";
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
        scanf("%s %s",&user,&pwd);
        break;
    default:
        printf("error");
        break;
    case 2:

        printf("--sign in--\n");
        printf("enter username & password >>\n");
        scanf("%s %s",&user_input,&pwd_input);
        if(strcmp(user_input,user)==0 && strcmp(pwd_input,pwd)==0) 
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
