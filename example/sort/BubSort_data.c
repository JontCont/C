#include <stdio.h>
#include <time.h>

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
        printf("²Ä %d ¦¸±Æ§Ç¡G", t); 
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