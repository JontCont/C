#include <stdio.h>
#include <conio.h>
#define SIZE 32  // 代表 32 位元的陣列 

int main(void)
{
  int i= SIZE-1;    // 迴圈變數與陣列元素值 
  int number;      // 使用者輸入值, 及計算除法時的餘數 
  unsigned char binary[SIZE]={0}; // 儲存除法計算中的餘數,
                                  // 即二進位數字中的 1 位數字 
  printf("請輸入十進位數字: ");
  scanf("%d", &number);
  
  if(number<0) number = -number;  // 若是負數, 將之轉成正數 
  
  do    // 做連除法的迴圈 
  {
    printf("%d 除以 2=> 商 %d, 餘數 %d\n",  // 輸出計算過程 
            number, number/2, number%2);
    binary[i--] = number%2;   // 取餘數, 也就是二進位中的數字 
    number=number/2;          // 取商數, 當做下一輸被除數     
  } while(number>0);          // 被除數為 0 即結束迴圈 
  
  printf("\n二進位表示: ");
  for(i=i+1; i<SIZE; i++)  // 迴圈從除法運算剛處理完的元素開始 
       printf("%d", binary[i]);
    
  return 0;
}
