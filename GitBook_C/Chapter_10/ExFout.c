#include <stdlib.h>
#include <stdio.h>


int main(){
    FILE *fp1,*fp2; //start values

    //w =>寫 
    //r => 讀
    fp1 = fopen("filetext/dat.txt","r");
    fp2 = fopen("filetext/done.txt","w");//auto one file
    char name[15];// file(.txt) name
    float s1,s2,s3; //score 
    float avg,sum;

    while(fscanf(fp1,"%s %f %f %f",name,&s1,&s2,&s3)!=EOF)
    {
        sum = s1+s2+s3; 
        avg = sum/3;

        printf("%-10s %5.1f %5.1f %5.1f %5.1f %5.1f\n",name,s1,s2,s3,sum,avg);
        fprintf(fp2,"%-10s %5.1f %5.1f %5.1f %5.1f %5.1f\n",name,s1,s2,s3,sum,avg);

    }

    fclose(fp1);
    fclose(fp2);//close values
    return 0;
}