#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"
    int i ;
    int A[] = {0};
    int Num=5;

int main(void) 
{ 
    printf("=========================Sort==========================\n");
    printf("=======Input(Automatically generate 5 random values)========\n");      

    for(i=1; i <= Num ;i++)
        scanf("%d",&A[i]);
    printf("\n"); 

	printf("================output(Bubble Sort)======================\n");  
    BubSort_data(A, Num);
	PrintSort(A, Num);
	printf("\n");
    printf("================output(Selection Sort)======================\n");  
    SelSort_data(A, Num);
	PrintSort(A, Num);
	printf("\n");
    printf("================output(InSort)======================\n");  
    InSort_data(A, Num);
	PrintSort(A, Num);
	printf("\n");
    system("PAUSE");
    return 0;
}

