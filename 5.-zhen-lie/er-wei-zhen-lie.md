# 二維陣列

列為橫向，行為直向。類似於隊伍中或是教室桌椅的形式。

二維陣列宣告方式 :

{% hint style="info" %}
資料型態　陣列名稱　\[ 列數 m \] \[ 行數 n \]
{% endhint %}

### 說明

1. 資料型態
2. 陣列名稱
3. 列數m
4. 行數n 
5. 二維陣列有兩個\[ \]
6. 一維度索引範圍於0 - m-1 之間
7. 二維度索引範圍於0 - n-1 之間

### 初始化

{% hint style="info" %}
資料型態　陣列名稱［列數 m］［行數 n］ =  
{ 初始值 a 11, 初始值 a12 ,初始值a13...},

{ 初始值 a 21, 初始值 a22 ,初始值a23... }

....

{ 初始值 a 1, 初始值 amn... ,初始值amn };
{% endhint %}

#### 範例

分別輸入一家企業2間公司一年四季營業額，輸入一年總營業額。

{% tabs %}
{% tab title="C" %}
```c
#include<stdio.h>
#include<stdlib.h>

void main (){
    int money[2][4];
    int total=0;
    int i =0, j =0;

    do{
        while (j<4)
        {
            printf("The %d quarter's turnover of the %d branch ", i+1,j+1);
            scanf("%d",&money[i][j]);
            total +=money[i][j];
            j++;
        }
        i++; j =0;
    }while (i < 2 );
    printf("One year's total turnover>> %d", total);

}

```
{% endtab %}
{% endtabs %}

有一個3行4列的陣列，編寫一段程式，求出其中的最大值，以及最大值所在的行號和列號。

```c
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int i, j, c, d, max;
    max = a[0][0];
    //迴圈行數
    for (i = 0; i <= 2; i++)
    {
        //迴圈列數
        for (j = 0; j <= 3; j++)
        {
            if (max <= a[i][j])
            {
                max = a[i][j];
                c = i;
                d = j;
            }
        }
    }
    printf("最大數為：%d\n行號為：%d\n列號為：%d", max, c, d); //下標從0開始

    return EXIT_SUCCESS;
}
```

