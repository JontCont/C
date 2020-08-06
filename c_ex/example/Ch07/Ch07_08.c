#include <stdio.h>

int main(void)
{
  int i, j;             // 癹伴跑计 

  for (i=1;i<10;i++)    // 北砆计癹伴 
  {
    for (j=1;j<10;j++)  // 北计癹伴 
    {
        printf(" %d*%d=%2d",i,j,i*j);
    }
    printf("\n");
  }

  return 0;
}
