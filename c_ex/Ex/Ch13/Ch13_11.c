#include <stdio.h>
#define CUBE_AREA(x) x*x*6  // 定義立方體表面積公式的巨集 

int main(void)
{
  float edge;

  printf("計算立方體表面積, 請輸入立方體邊長: ");
  scanf("%f", &edge);

  #ifdef CUBE_AREA             // 判斷 CUBE_AREA 是否已被定義 
    printf("立方體表面積公式已定義完成, 計算中...\n");
  #else
    printf("立方體表面積公式尚未定義完成, 定義中...\n");
    #define CUBE_AREA(x) x*x*6   // 如果未定義, 則重新定義 
    printf("定義完成, 計算中...\n");
  #endif
    printf("\n邊長 %f 的立方體表面積為 %.2f\n", edge, 
                                                CUBE_AREA(edge)); 
  return 0;
}
