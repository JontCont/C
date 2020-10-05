---
description: 條件通常由關係運算式、邏輯運算式、算術運算式組合成的
---

# 迴圈結構

迴圈結構描述事件重複現象。迴圈結構有三種：

### 1.FOR - 計數迴圈 / 前測式條件迴圈

{% hint style="info" %}
🧙‍♂️ 使用方式:  

for\( **初始值; 範圍 ; 動作**\){

          陳述列 1;

}
{% endhint %}

當執行迴圈結構開端時，會檢查判斷是否是對的，就會去做執行。

![&#x524D;&#x6E2C;&#x5F0F;&#x689D;&#x4EF6;&#x8FF4;&#x5708;](../.gitbook/assets/image%20%2833%29.png)

如何記住使用方式，for 迴圈內，因為有計數之稱，所以會有**初始值、範圍、動作**，這就是寫入for迴圈最簡單的記憶方式。

 1. 寫出1~5相加的結果

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i < 6; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}

```
{% endtab %}

{% tab title="C++" %}
```cpp
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i < 6; i++)
    {
        sum += i;
    }
    cout<<sum;
    return 0;
}

```
{% endtab %}
{% endtabs %}

2. 寫出成績總成績以及平均值

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count,score,sum = 0;
    float avg = 0;
    printf("請輸入幾科");
    scanf("%d",&count);
    printf("請輸入分數");
    for(int i =0;i<count;i++)
    {
        scanf("%d",&score);
        sum += score;
    }
    avg =(float) sum/count;
    printf("總成績 %d",sum);
    printf("平均 %.1f",avg);

    return 0;
}

```
{% endtab %}

{% tab title="C++" %}
```cpp
int main(int argc, char const *argv[])
{
    int count,score,sum = 0;
    float avg = 0;
    cout<<"請輸入幾科";
    cin>>count;
    cout<<"請輸入分數";
    for(int i =0;i<count;i++)
    {
        scanf("%d",&score);
        sum += score;
    }
    avg =(float) sum/count;
    cout<<"總成績 %d"<<sum;
    cout<<"平均 %.1f"<<avg;

    return 0;
}
```
{% endtab %}
{% endtabs %}

#### 3. 99乘法表

{% tabs %}
{% tab title="C" %}
```c
int main(void)
{
		int i , j,k;
	for(i = 0; i< 9;i+=5,printf("---------------------------------------\n"))
	{
		for(j = 0; j <= 9;j++,printf("\n"))
		{
			for(k=i;k < i+5;k++){  printf("%2d x %1d = %2d ",k,j,k*j);}
		}
	}
}
```
{% endtab %}
{% endtabs %}

### 2.前測式條件迴圈

for/while 兩種前測式條件迴圈

1.利用while迴圈做出，輸入任意數字，直到0以後才停止，限制1~3。

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}
```cpp
int main(int argc, char const *argv[])
{
    int state = 50;
    int get_num = 0;

    cout << "桌上有50顆球 請輸入拿取數量，";
    cout << "範圍1-3\n";
    while (state >= 0)
    {
        cin >> get_num;
        if (get_num > 3 || get_num < 0)
        {
            cout << "請再輸入一次 範圍1-3\n";
        }
        else
        {
            state -= get_num;
        }
        cout << "剩下 " << state << "\n";
    }

    return 0;
}

```
{% endtab %}
{% endtabs %}

2. 輸入一正整數，然後將它倒過來輸出 \(1234 -&gt; 4321\)

{% tabs %}
{% tab title="C" %}
```text

```
{% endtab %}

{% tab title="C++" %}
```text

```
{% endtab %}
{% endtabs %}

### 3.後測式條件迴圈

do...while

![&#x5F8C;&#x6E2C;&#x5F0F;&#x689D;&#x4EF6;&#x8FF4;&#x5708;](../.gitbook/assets/image%20%2834%29.png)

1.利用do...while\(\) ，模擬販賣機作業流程，投入金額，在選擇飲料。

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

2.利用do...while\(\) ，做出簡易介面。

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

