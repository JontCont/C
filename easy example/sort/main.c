#include <time.h>
#include <stdio.h>
#include "Sort.h"
//#define Num 10

int A[10]={0};
int Num=10;
int main() 
{ 
    printf("=========================Sort==========================\n");
    printf("=======Input(Automatically generate 10 random values)========\n");      
    RandomNum(A,Num);            
    printf("\n"); 
	//--------------------------------------------------//
	printf("================output(Bubble Sort)======================\n");  
    //BubSort(A, Num);
	//PrintSort(A, Num);
	//printf("\n");
    BubSort_data(A, Num);          
    PrintSort(A, Num);     
    printf("\n\n"); 
	//---------------------------------------------------//
	printf("===============output(Selection sort)====================\n");  
    //SelSort(A, Num);
	//PrintSort(A, Num);
	//printf("\n");
    SelSort_data(A, Num);          
    PrintSort(A, Num);     
    printf("\n\n"); 
	//---------------------------------------------------//
    printf("===============output(Insertion Sort)====================\n");  
    //InSort(A, Num);
	//PrintSort(A, Num);
	//printf("\n");
    InSort_data(A, Num);          
    PrintSort(A, Num);     
    printf("\n\n"); 
    //system("PAUSE");
    return(0);
}

