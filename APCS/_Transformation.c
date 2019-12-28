#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[10][10],b[10][10];
void rotate(int r,int c)
{
	int i ,j;
	for(i=c-1;i>=0;i++)
		for(j=0;j<r;j++)
			b[(c-1)-i][j]=a[j][i];
	for(i=0; i<c;i++)
		for(j=0;j<r;j++)
			a[i][j]=b[i][j];
}

void mirror(int r,int c)
{
	int i,j;
	for(i=r-1;i>=0;i++)
		for(j=0;j<c;j++)
			b[(r-1)-i][j]=a[j][i];
	for(i=0; i<r;i++)
		for(j=0;j<c;j++)
			a[i][j]=b[i][j];
}
int main()
{
	int op[10],R,C,M,temp;
	while (printf("%d,%d,%d",R,C,M))
	{
		for(int i=0;i<R;i++)
		{
			for(int j=0;j<C;j++)
				printf("%d",a[i][j]);
		}
		for(int i=0;i<M;i++) printf("%d",op[i]);
		for(int i=M-1;i>=0;i--){
			if (op[i] == 1) 
				mirror(R,C);
			else{
				rotate(R,C);
				temp=R;
				R=C;
				C=temp;
			}
		}
		scanf("%d, %d\n",R,C); 

	    for(int i=0;i<R;i++)
		{
		    printf("%d",a[i][0]);
		    for(int j=1;j<C;j++)
			    printf("%d",a[i][j]);
	    }	
	}
	
}


 

