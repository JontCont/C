#include <stdio.h>

void Ch06_02(void)
{
  int integer;

  printf("判斷單雙數, 請輸入一個數字: ");
  scanf("%d",&integer);
  
  // 判斷 integer 是否可被 2 整除 (餘數為 0) 
  if (integer%2 == 0)	
  {          // 為真, 從螢幕輸出是雙數的訊息 
  	printf("%d 是雙數!!\n", integer);  
  }
  else
  {			// 為假, 從螢幕輸出是單數的訊息 
    printf("%d 是單數!!\n", integer);  
  }
  
  //return Ch06_02;
}
