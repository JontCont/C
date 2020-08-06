 #include <stdio.h>
 
 int main(void)
 {
         // price 為售價, discount 是折扣 
   int price,discount;           
   int option;                 // 折扣的選項 

   printf("請輸入產品售價:\n");
   scanf("%d",&price);         // 輸入產品售價 
   printf("是否為打折商品"); 
   printf("(輸入 1 表示是, 其餘數字表示不是): \n");
   scanf("%d",&option);        // 選擇是否有折扣 

   if (option==1)              // 判斷折扣的選項 
   {
     printf("請問打幾折? (請輸入 1~9 的數字)\n");
     scanf("%d",&discount);    // 輸入折扣數 
     price=price*discount*0.1; // 計算打折後的售價 
   }

   printf("應付 %d 元\n",price);
 
   return 0;
}
