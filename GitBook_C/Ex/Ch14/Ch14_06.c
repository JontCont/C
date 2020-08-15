#include <stdio.h>

struct account
{
  int  id;       // 帳號
  char name[10]; // 帳戶名稱 
  int  balance;  // 餘號 
};
     
void checkBalance(struct account);   // 參數資料型別為結構體的函式  
void withdraw(struct account*, int); // 提款函式, 
                                     // 參數資料型別為結構體指位器
int main(void)
{
  struct account customerA={1, "Mary Wang", 50000 };
  withdraw(&customerA, 30000);  // 以結構體變數位址為參數呼叫函式
  
  withdraw(&customerA, 25000);  // 以結構體變數位址為參數呼叫函式

  return 0;
}

void checkBalance(struct account x)
{
  printf("帳號: %04d\n", x.id);
  printf("帳戶名稱: %s\n", x.name);
  printf("餘額: %d 元\n", x.balance);
}

void withdraw(struct account* x, int amount)
{ 
  if(amount <= x->balance)
  {
    x->balance -= amount;
    printf("*** 提款 %d 元, 出鈔中...\n", amount);
  }
  else
    printf("*** 提款失敗, 餘額不足\n");
  
  checkBalance(*x);
}
