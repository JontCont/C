#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
/* 用3*2 的二維 float ，設為1 2 3 4 5 6 */

int main(int argc, char **argv)
{
	int i,j,k=0;
	
	float **ptr = new float *[3];
	for(i=0;i<3;i++){ ptr[i]=new float[2]; }
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			ptr[i][j] =k;
			k++;
			std::cout <<"ptr[" <<i<<"]["<<j<<"]="<<ptr[i][j]<<'\n';
		}
		
	}
	for(i=0;i<3;i++)
	{
		delete []ptr[i];	
	}
	delete [] ptr;
	ptr = NULL;
	
	return 0;
}
