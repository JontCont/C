#include<conio.h>
#include<stdio.h>
#include <string.h>

int main(void)
{
	char username[20] , password[20] ;
	int i ; 
	for(i = 1; i<=3;i++)
	{
		
		printf("pls enter username :");
		scanf("%s",&username);
		printf("pls enter  password :");
		scanf("%s",&password);
		if(strcmp(username,"admin")==0 && strcmp(password,"admin")==0)
		{
			printf("welcome my programing!! \n");
			break;
		}
		else
			printf(" %d warring!! \n",i);
		
			
	}

				
			
    return 0; 
}

