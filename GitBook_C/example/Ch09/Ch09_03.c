#include <stdio.h>
float plus(void);           // 加法函式 
float minus(void);          // 減法函式 
float multiply(void);       // 乘法函式 
float division(void);       // 除法函式 

int main(void)
{
  char  operation;          // 定義算符的變數
  extern float num1,num2;   // 使用外部變數   
    
  printf("輸入算式, 輸入完畢請按 Enter: \n");
  scanf("%f%c%f", &num1, &operation, &num2);

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

float num1,num2;            // 將欲運算的兩變數定義成外部變數 

// 傳回兩變數和的函式 
float plus(void)    { return num1+num2; }

// 傳回兩變數差的函式 
float minus(void)   { return num1-num2; }

// 傳回兩變數積的函式 
float multiply(void) { return num1*num2;}

// 傳回兩變數商的函式 
float division(void) { return num1/num2;}
