#include<stdio.h>
#include<string.h>
#include <limits.h>

int main(void)
{
	/*--------------------- 宣告 ----------------------*/ 
	FILE *fp1,*fp2;
	char week[7][10]={"MONDAY","TUESDAY","WEDNESDAY",
					"THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
	char car[4][8]={"Big Car","Mid Car","Sml Car","Gov Car"};
	//-------------------------------------------// 
	char typecar[8],typeday[10];  //設定車種 星期
	int nuber[4];   			//file integer 
	int amount[4],amo_day[7];//存取總數 
	int i,j,temp=0,sum;  	 
	//-------------------------------------------//
	
	fp1=fopen("filetext/940307.SM","r");//dat.txt read
	fp2=fopen("940307.TO1","w");			//out.txt write
	
	/*---------------------default--------------------------*/
	for(i=0;i<4; i++) amount[i]=0;
	for(i=0;i<7;i++) amo_day[i]=0;
	
	while(fscanf(fp1,"%s %d %d %d %d",typeday,&nuber[0],&nuber[1],&nuber[2],&nuber[3])!=EOF) //fscanf ==-1 時 
	{
		/*加總計數 (cartype)*/
		for(i=0;i<4;i++) amount[i] += nuber[i]; 
		/*加總計數()*/
		for(i=0;i<7;i++)
			if(strcmp(typeday,week[i])==0)	
				amo_day[i] += nuber[0]+nuber[1]+nuber[2]+nuber[3];
	}

	/*------------------selection sort---------------------*/
	for(i=0;i<4;i++)
		for(j=i+1;j<4;j++)
			if(amount[i] > amount[j])
			{
				 temp= amount[i];
				 amount[i]= amount[j];
				 amount[j]=temp;
				 strcpy(typecar , car[i]);
				 strcpy(car[i] , car[j]);
				 strcpy(car[j] , typecar);
			}	 
	/*--------------------cartype_output-------------------*/
	for(i=0 ; i<4 ; i++)
	{
		printf("%8s :%9d \n",car[i],amount[i]);
		fprintf(fp2,"%8s :%9d \n",car[i],amount[i]);
	}
	/*------------------daytype__output---------------------*/
	for(i=0 ; i<7 ; i++)
	{
		printf("%9s%10d \n",week[i],amo_day[i]);
		fprintf(fp2,"%9s%10d \n",week[i],amo_day[i]);
	}
	//---close file-----//	
	fclose(fp2);
	fclose(fp1);

    return 0; 
}

