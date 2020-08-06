#include <stdio.h>
#include <string.h>

int main(void)
{
  char source[]="twinkle twinkle little star";
  char target1[64]="this is a test"; 
  char target2[10]={0};        
  int len;  // 用來儲存陣列容量的變數 
  
  len=(sizeof(target1)-1);   // 計算 target1 陣列容量 
  if(strlen(source) <= len)  // 若容量大於等於來源字串長度 
    strcpy(target1, source); // 直接複製 
  else                        
    strncpy(target1, source, len);  // 只複製陣列大小減 1 個字元 
  printf("target1 字串:%s\n", target1);
  
  len=(sizeof(target2)-1);   // 計算 target2 陣列容量 
  if(strlen(source) <= len)  // 若容量大於等於來源字串長度 
    strcpy(target2, source); // 直接複製  
  else
    strncpy(target2, source, len);  // 只複製陣列大小減 1 個字元 
  printf("target2 字串:%s\n", target2);   

  return 0;
}
