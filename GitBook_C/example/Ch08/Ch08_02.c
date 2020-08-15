#include <stdio.h>
int max(int,int);  // ゑ耕 2 计, 肚程ㄧΑ 

int main(void)
{
  // 纗 4 计跑计 
  int num1, num2, num3, num4;

  printf("叫块 4 计\n");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  printf("程计 %d ",
         // ゑ耕计1 ㎝计2 , 
         // ゑ耕计3 ㎝计4 , 
         // 癸 2 Ωゑ耕挡狦暗ゑ耕 
         max( max(num1, num2), 
              max(num3, num4) ) );
         
  return 0;
}

// ﹚竡ゑ耕ㄢ计ㄧΑ 
int max(int x, int y)
{
  if (x>y)  return x;
  else      return y;
}
