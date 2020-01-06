#include <stdio.h>
#include <string.h>
void Ch06_06()
{
  char color;           // 紅綠燈顏色輸入值 

  printf("請輸入紅綠燈燈號 (紅r, 綠g, 黃y): ");
  scanf("%s", &color);  // 從鍵盤輸入紅綠燈顏色代碼

  switch(color) 
  {
      case 'r':  // 小寫 r 或
      case 'R':  // 大寫 R 都會執行到相同段落
          printf("紅燈, 踩剎車\n" );
          break ;
      case 'g':  // 小寫 g 或
      case 'G':  // 大寫 G 都會執行到相同段落
          printf("綠燈, 繼續前進\n" );
          break ;
      case 'y':  // 小寫 y 或
      case 'Y':  // 大寫 Y 都會執行到相同段落
          printf("黃燈, 加速通過\n" ) ;
          break ;
      default:    // 燈號故障？
          printf("無法辨識, 減速慢行\n" ) ;
  }

  //return Ch06_06;
}
