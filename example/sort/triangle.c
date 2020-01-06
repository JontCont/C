/*
第 1 題  三角形辨別 
問題描述 
	三角形除了是最基本的多邊形外，亦可進一步細分為鈍角三角形、直角三角形及銳角 三角形。若給定三個線段的長度，透過下列公式的運算，即可得知此三線段能否構成 三角形，亦可判斷是直角、銳攪和鈍角三角形。 
 
(提示：若 a、b、c 為三個線段的邊長，且 c 為最大值，則     
	若 a + b  ≦  c，三線段無法構成三角形  
	若 a × a + b × b  <  c × c，三線段構成鈍角三角形 (Obtuse triangle)  
	若 a × a + b × b  =  c × c，三線段構成直角三角形 (Right triangle)  
	若 a × a + b × b  >  c × c，三線段構成銳角三角形 (Acute triangle) 
)
 
請設計程式以讀入三個線段的長度判斷並輸出此三線段可否構成三角形？
若可，判斷 並輸出其所屬三角形類型。 

輸入格式 
	輸入僅一行包含三正整數，三正整數皆小於 30,001，兩數之間有一空白。 
 
輸出格式 
	輸出共有兩行，第一行由小而大印出此三正整數，
	兩數字之間以一個空白間格，最後 一個數字後不應有空白；
	第二行輸出三角形的類型： 
		若無法構成三角形時輸出「No」；
	  	若構成鈍角三角形時輸出「Obtuse」；  
	  	若直角三角形時輸出「Right」；  
	  	若銳角三角形時輸出「Acute」。 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a,b,c,i,j,Temp;
	int user[2]={0};
	printf("enter triangle :");
	scanf("%d %d %d",&user[0],&user[1],&user[2]);
	
	for (i = 0; i < 3; i++)
       for (j = i + 1; j < 3; j++)
          if (user[j] < user[i])
			{
				Temp = user[i];
				user[i] = user[j];
				user[j] = Temp;
			}
		
	printf("%d %d %d \n",user[0],user[1],user[2]);
	a =user[0]; b= user[1];c=user[2];

	if(a+b<=c) printf("no");
	else if(a*a+b*b<c*c) printf("Obtuse");
	else if(a*a+b*b==c*c) printf("Right");
	else if(a*a+b*b>c*c) printf("Acute");
	
	printf("\n");
	
}


 

