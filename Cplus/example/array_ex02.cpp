#include <iostream>
#include <cstdlib>
#include <stdio.h>

int main()
{
 int i,j;
 int Sum[4]={0};  
 
 int Score[4][5] = {
 { 65, 85, 78, 75, 69 }, 
 { 66, 55, 52, 92, 47 }, 
 { 75, 99, 63, 73, 86 }, 
 { 77, 88, 99, 91, 100 } 
 };

  for (i = 0; i <=3; i++)              
    for (j = 0; j <=4; j++)             
       Sum[i] += Score[i][j]; 

  for (i = 1; i <= 4; i++)     
    printf("第%d位同學的平均成績=%d\n",i,Sum[i-1]/5); 
   
   return(0);
}
