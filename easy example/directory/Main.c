#include <stdio.h>
#include <string.h>
#include "Ch06.h" 


int Price_01 (void)
 {
         // price 為售價, discount 是折扣 
   int price,discount;           
   char option;                 // 折扣的選項 

   printf("請輸入產品售價:");
   scanf("%d",&price);         // 輸入產品售價 

   printf("是否為打折商品"); 
   printf("(輸入 Y OR y 表示是, 其餘數字表示不是): \n");
   scanf("%s",&option);        // 選擇是否有折扣 

   if(option ==  'y' || option == 'Y')           // 判斷折扣的選項 
   {
     printf("請問打幾折? (請輸入 1~9 的數字)\n");
     scanf("%d",&discount);    // 輸入折扣數 
     price=price*discount*0.1; // 計算打折後的售價 
     if(discount>9)	{
     	printf("輸入錯誤 \n");
     	return 0;
	 }	 	
     printf("應付 %d 元\n",price);
   }
 	else	
 		printf("應付 %d 元\n",price);
	 
    //return Price_01;
}

int main (void){
	int user_option=0;
	
	while(1){	
	
	printf("||=====================================================|| \n");
	printf("||----------------第六章 整合、呼叫--------------------|| \n");
	printf("||-----------------------------------------------------|| \n");
	printf("||--1_CH06-1 售價--------------4_CH06-4 if     使用(1)-|| \n");
	printf("||--2_CH06-2 判別--------------5_CH06-5 Switch 使用(1)-|| \n");
	printf("||--3_CH06-3 分數--------------6_CH06-6 Switch 使用(2)-|| \n");
	printf("||=====================================================|| \n\n");
	
	printf("請輸入選項:");
	
	scanf("%d",&user_option);
	
		switch(user_option)
		{
			case 1:Price_01();printf("\n");break;
			case 2:Ch06_02();printf("\n");break;
			case 3:Ch06_03();printf("\n");break;
			case 4:Ch06_04();printf("\n");break;
			case 5:Ch06_05();printf("\n");break;
			case 6:Ch06_06();printf("\n");break;
			default:
				if(user_option!=0)printf("輸入錯誤\n"); 
				else printf("離開中...");
		}
	if(user_option==0) return 0;
	}


}
