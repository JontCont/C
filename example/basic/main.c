
#include<stdio.h>
#include"bmi.h"

int main(void)
{
	
	int in_weight,in_height,option;
	printf("pls input guest weight >>");
	scanf("%d",&in_weight);
	printf("pls input guest height >>");
	scanf("%d",&in_height);
	printf("pls input guest sex (1)man (2)woman >>");
	scanf("%d",&option);
	
 	int Bmi = cal(in_weight ,in_height);
	
	switch(option){
   	case 1 :
	   if ( Bmi >25)   printf("so fat !");
	   		else if ( Bmi < 20)   printf("eat more!");
	    		else   printf("Continue to keep");
	   break;
	case 2 :
			   if ( Bmi >22)  printf("so fat !");
	   				else if ( Bmi < 18)  printf("eat more!");
	    				else  printf("Continue to keep");
		break; 
	default :
		printf("ERROR DATA ....");
   }
	
    return 0; 
}

