#include <stdio.h>
#define CtoF(C) C*9/5+32        // 定義攝氏轉華式的巨集 
#define FtoC(F) (F-32)*5/9  // 定義華式轉攝氏的巨集 

int main(void)
{
  int option;               // 功能選擇變數 
  float temp;               // 溫度 

  printf("溫度度量衡轉換, 請選擇(1)攝氏轉華式(2)華式轉攝氏: ");
  scanf("%d", &option);
  printf("請輸入溫度: ");
  scanf("%f", &temp);

  if (option==1)           // 選擇 CtoF 的計算 
    printf("%5.2f 度 C 等於 %5.2f 度 F\n", temp, CtoF(temp));
  else if (option==2)      // 選擇 FtoC 的計算 
    printf("%5.2f 度 F 等於 %5.2f 度 C\n",temp, FtoC(temp));
  
  return 0;
}
