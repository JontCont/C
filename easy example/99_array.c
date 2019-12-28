
#include<stdio.h>

int A[]={0,1,2,3,4,5,6,7,8,9}; 
int B[]={0,1,2,3,4,5,6,7,8,9};

int main(void)
{
	int i,j,k;
	for(i = 0; i< 9;i+=5,printf("\n"))
		for(j = 1; j <= 9;j++,printf("\n"))
			for(k=i;k < i+5;k++) 
				printf("%2d*%1d =%3d ",A[k],B[j],A[k]*B[j]);
			
    return 0; 
}

