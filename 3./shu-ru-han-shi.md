# 3-2 輸出函式

在執行過程中，命令管理員\(Command\)遇到亂碼之類的時候，打上`chcp 65001`  轉 UTF-8 可以解決 中文亂碼問題。

![Command](../.gitbook/assets/image%20%2823%29.png)

## 練習

### 1. 寫一個長方形面積 

{% tabs %}
{% tab title="C " %}
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //長方形面積 (長*寬)
    float width = 2.9;
    float height = 2.9;

    printf("面積 >> %d", (width * height));
    system("PAUSE");
    return 0;
}
\
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    //長方形面積 (長*寬)
    float width = 2.9;
    float height = 2.9;
    cout << width * height;
    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

### 2. BMI 

 **BMI值計算公式:**    BMI = 體重\(公斤\) / 身高2\(公尺2\)

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // BMI值計算公式:    BMI = 體重(公斤) / 身高2(公尺2)
    int weight = 2.9;
    float height = 2.9;
    int Bmi;
    height /=100;
	Bmi= weight/(height*height);
    printf("Bmi = %d", Bmi);
    system("PAUSE");
    return 0;
}


```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    //長方形面積 (長*寬)
    int weight = 2.9;
    float height = 2.9;
    int Bmi;
    height /= 100;
    Bmi = weight / (height * height);
    cout << "BMI = " << Bmi;
    system("PAUSE");
    return 0;
}

```
{% endtab %}
{% endtabs %}

## 輸出格式化數字

C/C++ 中，Printf\(\) 格式字串中，可以在% 與  d 中間加入數字。此數字表示欄寬\(field width\)，是顯示數值行數。

```c
printf("Int out number = %3d \n", inches);
```

inches 位置是有保留 \(%3d \) 3個列印空間\(欄位\)，印此未超過3個位置會看得出，數值有向右對齊的效果。

因次有三個結論

1. %3d  : 如果數值未滿時候，會有向右對齊。
2. %-3d : 如果數值未滿時候，會有向左對齊。
3. 若寬度不夠顯示數值，會自動擴充欄寬。

