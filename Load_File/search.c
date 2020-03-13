#include<stdio.h>
#include<string.h>

void shol_num(FILE *fp1);
void shol_name(FILE *fp1);

int main()
{
    FILE *fp1=fopen("filetext/abc.txt","r");
    int opit;
    printf("Choose to search by student number (1) or name (2) :");    
    scanf("%d",&opit);

    switch (opit)
    {
    case 1:
        
        shol_num(fp1);break;
    case 2: 
        shol_name(fp1); break;
    default:
        printf("Not option !!");break;
    }
    fclose(fp1);

    return 0;
}
void shol_num(FILE *fp1)
{
    FILE *fp2=fopen("filetext/search.txt","w");
    char *p;
    char search[20],stdID[20],stdName[20];
    printf("search  number >>");
    scanf("%s",&search);
    fputs("open to file : search.txt\n\n" , fp2);
        do{	
            fscanf(fp1,"%s %s ",&stdID,&stdName);
            p =strstr(stdID,search);
            if(p!=NULL)
               {
                printf("%-10s %s \n",stdID,stdName);        
                fprintf(fp2,"%-10s %s \n",stdID,stdName);	
               } 				
        } while(!feof(fp1));
    
}
void shol_name(FILE *fp1){
    FILE *fp2=fopen("filetext/search.txt","w");
    char *p;
    char search[20]="",stdName[20],stdID[20];
    printf("search  name >>");
    scanf("%s",&search);
    fputs("open to file : search.txt\n\n" , fp2);
    do{
        fscanf(fp1,"%s %s ",&stdID,&stdName);
        p =strstr(stdName,search);
        if(p!=NULL)
        {
            printf("%-10s %s\n",stdID,stdName);
            fprintf(fp2,"%-10s %s \n",stdID,stdName);	
        }
    }while(!feof(fp1));
      
}