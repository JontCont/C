
/*
問題描述
    將一個十進位正整數的奇數位數的和稱為
    A ，偶數位數的和稱為 B ，則 A 與 B 的絕
    對差值 |A B| 稱為這個正整數的秘密差。
    例如：
    263541 的奇數位數的和 A = 6+5+1 = 12 ，偶數位數的和 B = 2+3+4 = 9 ，所以
    263541 的秘密差是 |12 9|= 3 。
    給定一個十進位正整數 X ，請找出 X 的 秘密差 。
    
    輸入格式
        輸入為一行含 有一 個十進位表示法的 正整數 X ，之後是一個換行字元 。
    輸出格式
        請輸出 X 的 秘密差 Y 以十進位表示法輸出 ))，以換行字元結尾 。
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char num[1001];
    printf("���K�t output >>> \n");
    scanf("%s",&num);
    int A=0,B=0;
    int strsum= strlen(num);
        
    for(int j=0;j<strsum;j+=2)
    {
        B+=num[j]-'0';
    }
    for(int i =1;i<strsum;i+=2)
    {
        A+=num[i]-'0';
    }
    int sum = A-B;
    printf("%d",sum);

   
    
}