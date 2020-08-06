#include <stdio.h>

int main(void)
{
  int n1=1, n2=2;
  char nx='x', nz='z';

  printf("第 %d 隻羊...\n",n1);  // 從螢幕輸出 n1 的值 
  printf("第 %d 隻羊...\n",n2);
  printf("第 %c 隻羊...\n",nx);
  printf("第 %d%c 隻羊...\n",n1,nx); // 從螢幕輸出 n1, nx 的值 
  printf("第 %d%c 隻羊...\n",n2,nx); 
  printf("第 %c%c%c 隻羊...\n",nx,nx,nx);
  printf("睡著了...%c%c%c\n",nz,nz,nz);

  return 0;
}
