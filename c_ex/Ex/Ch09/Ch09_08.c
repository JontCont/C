#include <stdio.h>
#include <conio.h>

void withdraw(void);
int money;      // 宣告提款金額 money 為外部變數 

int main(void)
{
  char option; // 迴圈判斷字元 

  do{
      printf("請輸入提款金額:\n");
      scanf("%d",&money);
      withdraw();
      printf("還要再領錢嗎?(y/n)\n");
      option=getch();
    } while(option=='y');

  return 0;
}

void withdraw(void)          // 處理提款金額的函式 
{
  static int balance= 10000; // 結餘為內部靜態變數 
  
  if (balance-money>=0)      // 判斷帳戶餘額是否足夠 
  { 
    balance -= money;        // 計算提款後的結餘 
    printf("您的帳戶內還有 %d 元\n",balance);
  }
  else
    printf("餘額不足, 您的帳戶只剩 %d 元\n",balance);
}
