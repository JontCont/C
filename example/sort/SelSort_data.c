#include <stdio.h>
#include <time.h>

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
        printf("²Ä %d ¦¸±Æ§Ç¡G", i); 
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
