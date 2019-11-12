#include <stdio.h>
#include <stdlib.h>

void Before_adding (void)
{
	int i,j ; 
	printf("              I     J\n");
	for(i=0;i<4;i++)
	{
		printf("outer    %6d\n",i);
		for(j=0 ; j <4; j++)
		{
			printf("     Inner %10d\n",j);
		}		
	}
}

void After_adding()
{
	int i,j ; 
	printf("              I     J\n");
	for(i=0;i<4;++i)
	{
		printf("outer    %6d\n",i);
		for(j=0 ; j <4; ++j)
		{
			printf("     Inner %10d\n",j);
		}		
	}
}

int main(void)  
{
	Before_adding();
	printf("--------------------------------------\n");
	After_adding();

	system("PAUSE");
	return 0;
}