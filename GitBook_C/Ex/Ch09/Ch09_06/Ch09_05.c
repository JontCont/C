extern float num1,num2;  // 加入此行才能使用 Ch09_06.c 中 
                         // 宣告的外部變數 
float plus(void)         // 傳回兩變數和的函式 
{ return num1+num2; }
float minus(void)        // 傳回兩變數差的函式 
{ return num1-num2; }
float multiply(void)     // 傳回兩變數積的函式 
{ return num1*num2; }
float division(void)     // 傳回兩變數商的函式 
{ return num1/num2; }
