# 三維陣列

三維陣列宣告方式 :

{% hint style="info" %}
資料型態　陣列名稱　\[層數 I\]\[ 列數 m \] \[ 行數 n \]
{% endhint %}

### 說明

1. 資料型態
2. 陣列名稱
3. 列數 m
4. 行數 n 
5. 層數 I
6. 三維陣列有三個\[ \]
7. 一維度索引範圍於0 - m-1 之間
8. 二維度索引範圍於0 - n-1 之間

### 初始化

{% hint style="info" %}
資料型態　陣列名稱［列數 m］［行數 n］ =  
{{ { 初始值 a 111, 初始值 a112 ,初始值a113...},

{ 初始值 a 121, 初始值 a122 ,初始值a123... }},

....

{ 初始值 a 1, 初始值 amn... ,初始值amn }}};
{% endhint %}

### 範例

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int a[2][4][3] = {{{15, 50, 65}, {38, 94, 25}, {79, 44, 19}, {89, 54, 73}},
     {{14, 90, 46}, {43, 23, 67}, {32, 56, 78}, {94, 78, 40}}};
    int i, j, c, d, e, max, x;
    max = a[0][0][0];
    //迴圈行數
    for (i = 0; i < 2; i++)
    {
        //迴圈列數
        for (j = 0; j < 4; j++)
        {
            for (x = 0; x < 3; x++)
            {
                if (max < a[i][j][x])
                {
                    max = a[i][j][x];
                    c = i;
                    d = j;
                    e = x;
                }
            }
        }
    }
    printf("最大數為：%d\n 高為：%d \n行號為：%d\n列號為：%d \n "
    , max, c, d, e); //下標從0開始
}
```
{% endtab %}
{% endtabs %}



