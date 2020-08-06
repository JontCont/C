#include <stdio.h>
#include "Ch09_05.h"   // 含括函式的宣告檔 

float num1,num2;       // 將欲運算的兩變數宣告成外部變數 
char operation;        // 宣告算符的變數成外部變數 

int main(void)
{
  printf("輸入算式, 輸入完畢請按 Enter:\n");
  scanf("%f%c%f",&num1,&operation,&num2);

  if (operation=='+')       // 加法算符 
    printf("= %f\n",plus());
  else if (operation=='-')  // 減法算符 
    printf("= %f\n",minus());
  else if (operation=='*')  // 乘法算符 
    printf("= %f\n",multiply());
  else if (operation=='/')  // 除法算符 
    printf("= %f\n",division());
  else
    printf("算符輸入錯誤\n");

  return 0;
}
