#include <stdio.h>
#include <stdlib.h>

void loop_math()
{
  /*ex :  output 
                  0
                  01
                  012
                  01
                  0
  */
  int i,j,k,n;
 printf("請輸入階數： ");
 scanf("%d",&n);
  
  for(i = 0 ; i<n ; i++)
  {
      for(k=0;k<i;k++)
        printf("%d",k);
      printf("\n");
  }
  
  for(i=0;i<n;i++)
  {
      for(k=0;k<n-i;k++)
        printf("%d",k);
    printf("\n");
  }
}


void loop_star()
{
int i,j,k,n;
printf("請輸入階數： ");
scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
      printf(" ");  
        for(k=0;k<i+1;k++)
          printf("* ");
  printf("\n");
  }
}

int main(void)
{
	printf("1. printf math \n");
	loop_math();
	printf("1. printf star (*) \n");
	loop_star();
	system("pause");
 return 0;
}