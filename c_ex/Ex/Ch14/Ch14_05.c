#include <stdio.h>

struct account
{
  int  id;       // 帳號
  char name[10]; // 帳戶名稱 
  int  balance;  // 餘號 
};
     
void checkBalance(struct account);  // 參數資料型別為結構體的函式  

int main(void)
{
  struct account customerA={1, "Mary Wang", 50000 };
  checkBalance(customerA);  // 以結構體變數為參數呼叫函式

  return 0;
}

void checkBalance(struct account x)
{
  printf("帳號: %04d\n", x.id);
  printf("帳戶名稱: %s\n", x.name);
  printf("餘額: %d 元", x.balance);
}
