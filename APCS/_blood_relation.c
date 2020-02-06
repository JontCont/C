/*
第4題 血緣關係
   問題描述
      小宇有一個大家族。有一天，他發現記錄整個家族成員和成員間血緣關係的家族族
      譜。 小宇 對於最遠的血緣關係 (我們稱之為 "血緣距離 ") 有多遠感到很好奇。
      0是 7的 孩子 1、 2和 3是 0的 孩子 4和 5是 1的 孩子 6是 3的 孩子 。
      我們可以輕易的發現最遠的親戚關係為4(或 5)和 6，他們的 "血緣距離 "是 4 (4~1 1~00~3 3~6)。
      給予任一家族的關係圖，請 找出最遠的"血緣距離 "。你可以假設只有一個人是整個家族
      成員的祖先，而且沒有兩個成員有同樣的小孩。
   輸入格式
      第一行為一個正整數n 代表 成員的個數， 每人以 0~n-1之間惟一的編號代表。 接著
      的 n-1行 每行有兩個以一個空白隔開的整數 a與 b (0 ? a,b ? n- 代表 b是 a的
      孩子 。
   輸出格式
      每筆測資輸出一行最遠"血緣距離 "的答案。
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int tree[MAX][2]={{0}}; //血緣關係樹
int maxD = 0;//最遠關係
int n;//scanf
int Child_NO[MAX] = {0};//判斷父母
int isChild[MAX] = {0};//記錄孩子


int DFS(int x) {
   if (Child_NO[x] == 0) return 0;//沒有小孩，遞迴中止

   else if (Child_NO[x] == 1)
   {
        for(int j=0 ; j<n-1 ; j++)
         {
            if(tree[j][0]==x)
            {
            return DFS(tree[j][1])+1;//回傳深度+1
            }
         }

    }
   else 
   {//小孩超過兩個以上
      int max1=0 , max2 = 0 ;
      for(int j=0 ; j<n-1 ; j++) 
      {
        if(tree[j][0]==x)
        {
            int dfsresult = DFS(tree[j][1])+1;
            if (dfsresult > max1)
            {
                int tmp = dfsresult;
                dfsresult = max1;
                max1 = tmp;
            }
            if (dfsresult > max2) max2 = dfsresult;
        }
      }
      if(maxD<max1+max2) maxD = max1 + max2 ;
      return max1;
   }
}

int main() {
   scanf("%d", &n);
    for (int i = 0; i<n-1; i++) 
    {
        scanf("%d %d", &tree[i][0], &tree[i][1]);
        Child_NO[tree[i][0]]+=1;
        isChild[tree[i][1]] = 1;
    }
    int root;

    //找出root
    for (int i = 0; i < n; i++) 
    {
        if (isChild[i]==0) 
        {//只要不是小孩，就是root
            root = i;
            break;
        }
    }

    int ResultRoot = DFS(root);
    if(ResultRoot > maxD) printf("%d",ResultRoot);
    else printf("%d", maxD);
      
    return 0;
}