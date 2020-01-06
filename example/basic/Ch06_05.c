#include <stdio.h>
#define RED 1    // 紅綠燈燈號代碼, 紅燈為 1
#define GREEN 2  // 綠燈為 2
#define YELLOW 3 // 黃燈為 3

void Ch06_05()
{
  int color;           // 紅綠燈顏色輸入值 

  printf("請輸入紅綠燈燈號 (紅1, 綠2, 黃3): ");
  scanf("%d", &color);  // 從鍵盤輸入紅綠燈顏色代碼

  switch(color) 
  {
    case RED:  
        printf("紅燈, 踩剎車\n" );
        break ;
    case GREEN:
        printf("綠燈, 繼續前進\n" );
        break ;
    case YELLOW:    
        printf("黃燈, 加速通過\n" ) ;
        break ;
    default:    // 燈號故障？
        printf("無法辨識, 減速慢行\n" ) ;
  }

  //return Ch06_05;
}
