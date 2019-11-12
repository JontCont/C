
#include<stdio.h>


int main(void)
{
	int i , j,k;
	for(i = 0; i< 9;i+=5,printf("\n"))
		for(j = 1; j <= 9;j++,printf("\n"))
			for(k=i;k < i+5;k++) 
				printf("%2d*%1d =%3d ",k,j,k*j);
			
    return 0; 
}

