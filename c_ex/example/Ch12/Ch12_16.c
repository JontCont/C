#include <stdio.h>

int main(void)
{      // 使用二維陣列存放多個字串
  char str[4][20]= {"Sun is shinning",  
                    "Flower is pretty",
                    "Sugar is sweety",
                    "And so are you"};
  int i;
  for(i=0;i<4;i++)  // 用迴圈逐筆輸出全部字串
    printf("%s\n",str[i]);

  return 0;
}
