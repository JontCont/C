#include <stdio.h>
#include <stdlib.h>
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
    {  
      for (j = 0; j <=4; j++)
        {
          scanf("%d",&Score[i][j]);
          Sum[i]+=Score[i][j];
        }
        printf("enter >>");
        for (int k = 0; k <=4; k++)
          printf("%d ",Score[i][k]);
        printf("\n");
    }   
  for (i = 1; i <= 4; i++)     
    printf("��%d��P�Ǫ��������Z=%d\n",i,Sum[i-1]/5); 
   return(0);
}