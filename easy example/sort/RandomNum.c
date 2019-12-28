#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int RandomNum(int A[],int Num)  
{
  int i;
  srand((unsigned)time(NULL));
  for (i = 1; i <= Num; i++)
    {
       A[i] = rand() % 90+10;  
       printf("%4d",A[i]);
    }
	return *A; 
}
