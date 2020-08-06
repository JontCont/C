#include <stdio.h>
#include <stdlib.h>

void Table(void)
{
	int i , j,k;
	for(i = 0; i< 9;i+=5,printf("------------------------------------------------------------\n"))
		for(j = 0; j <= 9;j++,printf("\n"))
			for(k=i;k < i+5;k++)
                printf("%2d x %1d = %2d ",k,j,k*j);
			
}

int main(void)
{
    
    printf("            ===============================\n");
    printf("            =---99 multiplication table---=\n");
    printf("            ===============================\n");
    
    Table();

    system("PAUSE");
    return 0;
}