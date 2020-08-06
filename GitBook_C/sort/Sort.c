#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B=temp;
}

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

void PrintSort(int A[], int Num) 
 {
    int i;
    for (i = 1; i <= Num; i++)
    {
      printf("%4d",A[i]);
    }   
}

void SelSort_data(int A[], int n)  
  {
 int i, j, k,Temp, Min = 0;
       for (i = 1; i <= n - 1; i++)
        {
         Min = i;
         for (j = i + 1; j <= n; j++)
          if (A[j] < A[Min])
             Min = j;
          {
            Temp = A[i];
            A[i] = A[Min];
            A[Min] = Temp;
          }
        printf("第 %d 次排序：", i); 
        for(k = 1; k <= n; k++) 
         {
           if(k == 1)
             if(i==1)
                printf("[%d]", A[k]); 
             else
                printf("[%d ", A[k]); 
           else if(k == i)
              printf("%d] ", A[k]); 
           else
              printf("%d  ", A[k]);    
         }         
        printf("\n");             
       }
  }

void SelSort(int A[], int n)  //選擇排序法之副程式
 {
   int i, j, Temp, Min = 0;
   for (i = 1; i <= n - 1; i++)
    {
       Min = i;
       for (j = i + 1; j <= n; j++)
          if (A[j] < A[Min])
             Min = j;
      {//相鄰兩個的資料交換位置
       Temp = A[i];
       A[i] = A[Min];
       A[Min] = Temp;
      }
    }
 }
 
 void InSort(int A[], int n)  
 {
   int i, j, Temp;
   for (i = 1; i <= n; i++)
    {
     Temp=A[i];
     j=i-1;
     while (Temp<A[j])
      {
        A[j+1]=A[j];
        j--;
        if(j==-1)
          break;
      }
      A[j+1]=Temp;
    }
 }
 
 void InSort_data(int A[], int n)
  {
     int i, j, k, Temp;
     for (i = 1; i <= n; i++)
      {
        Temp=A[i];
        j=i-1;
        while (Temp<A[j])
         {
           A[j+1]=A[j];
           j--;
           if(j==-1)
             break;
         }
        A[j+1]=Temp;            
        printf("第 %d 次排序：", i); 
        for(k = 1; k <= n; k++) 
         {
           if(k == 1)
             if(i==1)
                printf("[%d]", A[k]); 
             else
                printf("[%d ", A[k]); 
           else if(k == i)
              printf("%d] ", A[k]); 
           else
              printf("%d  ", A[k]);    
         }         
      printf("\n"); 
     }
  }

  void BubSort(int A[], int n)  
{
	int i, j , k,t=1, Temp;
    for (i=n-1; i>0; i--)
    {
		for (j =0; j <=i; j++)
			if (A[j] > A[j+1])
			{ 
				Temp = A[j];
				A[j] = A[j+1];
				A[j+1] = Temp;
			}          
	}
}

void BubSort_data(int A[], int n)  
  {
    int i, j , k,t, Temp;
    t = 0;
    for (i =n-1; i>0; i--)
       {
       for (j =0; j <=i-1; j++)
          if (A[j] > A[j+1])
             {
               Temp = A[j];
               A[j] = A[j+1];
               A[j+1] = Temp;
             }
        t = t + 1;     
        printf("第 %d 次排序：", t); 
        for(k = 0; k <= n-1; k++) 
         {
           if(k == (n - t - 1))
              printf("%d [", A[k]); 
           else if(k == n - 1)
              printf("%d]", A[k]); 
           else
              printf("%d  ", A[k]);    
         }
        printf("\n");             
       }
  }