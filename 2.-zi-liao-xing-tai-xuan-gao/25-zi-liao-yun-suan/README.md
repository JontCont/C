# 2-5 資料運算

## 指定運算子

\( = \) 作用左邊傳值給右邊的變數。

```c
int x = 5;
int i ;
i = x ;
```

上面表示 x會傳值給予 i ，就算 i 有其他的值，會把前面的值蓋掉。 

## 算術運算

如下表，是各種運算子運算

| 運算子 | 幾元運算子 | 作用 |
| :--- | :--- | :--- |
| + | 二元運算 | 兩個數字作相加 |
| - | 二元運算 | 兩個數字作相減 |
| \* | 二元運算 | 兩個數字作相 |
| / | 二元運算 | 兩個數字作相除 |
| % | 二元運算 | 兩個數字作取餘數 |
| + | 一元運算 | 將數字乘以+1 |
| - | 一元運算 | 將數字乘以-1 |

### 遞增、遞減

| 運算子 | 幾元運算子 | 作用 |
| :--- | :--- | :--- |
| ++ | 一元運算 | 將變數 +1 |
| -- | 一元運算 | 將變數  -1 |

遞增/減，特點是有順序性加減，何謂有順序性， 假設 i = 5 ;  
  
 `i++ //執行結過會事先 5`

  `++i //執行結過會事先 6`

按照上面方式可以得知， i++ 視為 先取值後+1 ， 則 ++i 視為 先 +1再取值。

### 練習

{% tabs %}
{% tab title="C" %}
```c
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    printf("i++ => %d\n",i++);    
    printf("i => %d\n",i);    
    
    i=5;
    printf("++i => %d\n",++i);    
    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

## 比較運算子

比較運算子，又稱"關係運算子"，通常會出現 if / for / while 當中，主要是為條件/範圍作區隔。

| 運算子 | 幾元運算子 | 作用 |
| :--- | :---: | :---: |
| &gt; | 二元運算 | 兩個數字作相加 |
| &lt; | 二元運算 | 左邊資料小於右邊資料 |
| &gt;= | 二元運算 | 左邊資料\(大於/等於\)右邊資料 |
| &lt;= | 二元運算 | 左邊資料\(小於/等於\)右邊資料 |
| == | 二元運算 | 左邊資料等於右邊資料 |
| != | 二元運算 | 左邊資料不等於右邊資料 |

## 邏輯運算

下方特點為 不執行結果，但有實際答案。 是作為減少執行結果的運算。   
邏輯運算 && \(類似像 數位邏輯中的 AND\)，\|\| 則是 \(數位邏輯中的 OR\)。' 

| 運算子 | 幾元運算子 | 作用 |
| :--- | :---: | :---: |
| && | 二元運算 | 兩邊關係是否都有成立 |
| \|\| | 二元運算 | 兩邊關係其中是否有成立 |
| ! | 一元運算 | 關係運算式的否定 |

## 位元運算

![&#x6578;&#x4F4D;&#x908F;&#x8F2F;](../../.gitbook/assets/image%20%2825%29.png)

上圖為數位邏輯\(Gate 的輸出結果\)， a、b 為輸入，則 y 為輸出結果。



<table>
  <thead>
    <tr>
      <th style="text-align:left">&#x904B;&#x7B97;&#x5B50;</th>
      <th style="text-align:center">&#x5E7E;&#x5143;&#x904B;&#x7B97;&#x5B50;</th>
      <th style="text-align:left">&#x4F5C;&#x7528;</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align:left">&amp;</td>
      <td style="text-align:center">&#x4E8C;&#x5143;&#x904B;&#x7B97;</td>
      <td style="text-align:left">
        <p>&#x5169;&#x500B;&#x6578;&#x503C;&#x6703;&#x4EE5;&#x4E8C;&#x9032;&#x503C;
          <br
          />&#x4F86;&#x57F7;&#x884C; (AND)</p>
        <p></p>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">|</td>
      <td style="text-align:center">&#x4E8C;&#x5143;&#x904B;&#x7B97;</td>
      <td style="text-align:left">&#x5169;&#x500B;&#x6578;&#x503C;&#x6703;&#x4EE5;&#x4E8C;&#x9032;&#x503C;
        <br
        />&#x4F86;&#x57F7;&#x884C; (OR)</td>
    </tr>
    <tr>
      <td style="text-align:left">^</td>
      <td style="text-align:center">&#x4E8C;&#x5143;&#x904B;&#x7B97;</td>
      <td style="text-align:left">&#x5169;&#x500B;&#x6578;&#x503C;&#x6703;&#x4EE5;&#x4E8C;&#x9032;&#x503C;
        <br
        />&#x4F86;&#x57F7;&#x884C; (XOR)</td>
    </tr>
    <tr>
      <td style="text-align:left">~</td>
      <td style="text-align:center">&#x4E00;&#x5143;&#x904B;&#x7B97;</td>
      <td style="text-align:left">&#x5169;&#x500B;&#x6578;&#x503C;&#x6703;&#x4EE5;&#x4E8C;&#x9032;&#x503C;
        <br
        />&#x4F86;&#x57F7;&#x884C; (NOT)</td>
    </tr>
  </tbody>
</table>

執行結果會如同上圖結果一樣，自行測試。



<table>
  <thead>
    <tr>
      <th style="text-align:left">&#x904B;&#x7B97;&#x5B50;</th>
      <th style="text-align:center">&#x5E7E;&#x5143;&#x904B;&#x7B97;&#x5B50;</th>
      <th style="text-align:left">&#x4F5C;&#x7528;</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align:left">&lt;&lt;</td>
      <td style="text-align:center">&#x4E8C;&#x5143;&#x904B;&#x7B97;</td>
      <td style="text-align:left">
        <p>&#x4E00;&#x500B;&#x4E8C;&#x9032;&#x5236;&#x6578;&#x5B57;&#x5DE6;&#x79FB;N&#x4F4D;&#x5143;</p>
        <p></p>
      </td>
    </tr>
    <tr>
      <td style="text-align:left">&gt;&gt;</td>
      <td style="text-align:center">&#x4E8C;&#x5143;&#x904B;&#x7B97;</td>
      <td style="text-align:left">&#x4E00;&#x500B;&#x4E8C;&#x9032;&#x5236;&#x6578;&#x5B57;&#x5DE6;&#x79FB;N&#x4F4D;&#x5143;</td>
    </tr>
  </tbody>
</table>

{% tabs %}
{% tab title="C" %}
```c
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 15;
    int y = 2;
    printf("i >> y = %d\n",(i>>y));    
    printf("i << y = %d\n",(i<<y));    

    system("PAUSE");
    return 0;
}

```
{% endtab %}
{% endtabs %}

## 優先順序

![](../../.gitbook/assets/image%20%2826%29.png)



## 資料型態轉換

### 自動型態轉換

{% hint style="info" %}
**說明**  :  double &gt; float &gt; int &gt; char
{% endhint %}

`char c= 'a'  
int i =10   
float f=3.6  
double b = c + i+ f;` 

### 強制轉換型態

`int a,b,c;  
float avg;  
avg =(float)(a+b+c)/3;`



