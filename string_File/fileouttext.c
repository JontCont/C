#include<stdio.h>
#include<string.h>
#include <limits.h>

int main(void)
{
	FILE *fp1 ,*fp2; //«Å§i file 
	char name[20],Sname[20],Iname[20]; 
	float a,b,c,sum,avg,max=INT_MIN,min=INT_MAX;
	
	fp1=fopen("filetext/dat.txt","r");//dat.txt read
	fp2=fopen("out.txt","w");//out.txt write
	
	while(fscanf(fp1,"%s %f %f %f",name ,&a,&b,&c)!=EOF) //fscanf ==-1 ®É 
	{
		sum = a+b+c;avg = sum/3;
		
		if(sum>max)
		{
			max =sum;
			strcpy(Sname,name);
		}
		
		if(sum<min){
			min =sum;
			strcpy(Iname,name);
		}
		
		fprintf(fp2,"%8s %8.1f %8.1f %8.1f %8.1f %8.1f \n",name ,a,b,c,sum,avg);
	}
		fprintf(fp2,"max:%6.1f   name:%s\n",max,Sname);
		fprintf(fp2,"min:%6.1f   name:%s\n",min,Iname);

	fclose(fp2);
	fclose(fp1);

    return 0; 
}

