#include<stdio.h>
#include<string.h>


int main(void)
{
	FILE *fp1;
	
	char option,*p;
	char find[20],stdName[20],stdID[20];
	
	fp1=fopen("filetext/abc.txt","r");
	
		printf("��ܷj�M(1)�Ǹ��B(2)�m�W:");
		scanf("%s",&option);
		
		if(option == '1')
		{
			printf("�п�J�j�M���� : " );
			scanf("%s",&find);	
			do{	
				fscanf(fp1,"%s %s ",&stdID,&stdName);
				p =strstr(stdID,find);
				if(p!=NULL)
					printf("%s %s \n",stdID,stdName);				
			} while(!feof(fp1));	
		}
		else if(option == '2')
		{
			printf("�п�J�j�M���� : ");
			scanf("%s",&find);
			do{	
			fscanf(fp1,"%s %s ",&stdID,&stdName);
				p =strstr(stdName,find);
				if(p!=NULL)
					printf("%s %s \n",stdID,stdName);				
			} while(!feof(fp1));
		}

	fclose(fp1);
    return 0; 
}

