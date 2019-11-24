/*
最大和
    問題描述
        給定 N群數字 ，每 群都恰有 M個正整數 。
        若從 每群數字 中各選擇一個數字 (假設第 i群所選出數字為 ti )，將所選出的，
        將所選出的 N個數字加總即可得和 S = S = S = S = t1+t2+…+ +…+ tN。
        請寫程 式計算 S的最大值 (最大總和 )，並判斷各群所選出的數字是 否可以整除 S。
    輸入格式
        第一行有二個正整數 N和 M， 1≦ N ≦ 20 ，1≦ M ≦ 20 。
        接下來的 N行 ，每一各有 M個正整數 xi ，代表一群整數， 
        數字與間有一個空 格，且 1≦ i ≦M，以及 1≦ xi ≦256 。
    輸出格式
        第一行輸出最大總和 S。
        第二行按照被選擇數字所屬群的順序，輸出可以整除 S的被選擇數字，
        數字與數字間以一個空格隔開 ，最後一個數字無空白；
        若 N個被選擇數字都不能整除 S，就輸出 -1。
*/

#include <stdio.h>

int main()
{
    int i,j,k;//for=> use
    int m,n;// first math
    int num,sum;//all enter math and quite sum
    int max_set[20]={0};//save data
    int record,bak_key=0; 
    scanf("%d %d",&m,&n); //set first math
    
    for(i=0 ;i< m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num);
            if(max_set[i]<num) max_set[i] = num;
        }
        sum+=max_set[i];
    }
    printf("%d\n",sum);

    for(i=0 ; i < m;i++)
    {
        if((sum % max_set[i])==0)
           {
               printf("%d ",max_set[i]);
               bak_key =1;
           } 
    }
    if(bak_key == 0) printf("-1");
}  