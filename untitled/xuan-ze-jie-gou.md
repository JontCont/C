# 選擇結構

程式運行模式有三種運作模式 ：

## 順序結構（Sequence structure）

只要按照解決問題的順序寫出相應的語句就行，它的執行順序是自上而下，依次執行

![Sequence structure](../.gitbook/assets/image%20%2831%29.png)

## 選擇結構 **（Selection Structure）**

### **1. 單一選擇**

**這個特性是只有一種狀況，可以使用這方式寫。  
例如：if**

![Selection Structure](../.gitbook/assets/image%20%2829%29.png)

### 範例

假設小名考80，有及格都會顯示及格。

{% tabs %}
{% tab title="C" %}
```text
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int score = 80;

    if(score>60){
        printf("及格");
    }
    return 0;
}
```
{% endtab %}

{% tab title="C++" %}
```text
#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int score = 80;

    if(score>60){
        std::cout<< "及格";
    }
    system("PAUSE");
    return 0;
}

```
{% endtab %}
{% endtabs %}

### **2. 雙重選擇**

**若事件有兩種狀況，例如：if ... else**

![](../.gitbook/assets/image%20%2827%29.png)

### **3. 多重選擇**

如果狀況有極多得可能，或是想輸出不同資料時候。

**例如：**if...else if...else、switch

![](../.gitbook/assets/image%20%2828%29.png)

\*\*\*\*

