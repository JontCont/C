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

1. 假設小名考80，有及格都會顯示及格。

{% tabs %}
{% tab title="C" %}
```c
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
```cpp
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

 2. 假設某家餐廳消費一客400元，持VIP打9折，無VIP則無打折，輸入持有VIP以及消費人數，在打印消費金額

{% tabs %}
{% tab title="C" %}
```c
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main() 
{
    float consum = 400;
    float discount = 0.9;
    int vipoption = 0 ;
    int people = 0;

    printf("持有vip卡(1:持有 2:無");
    scanf("%d",&vipoption);
    
    printf("消費人數");
    scanf("%d",&people);
    consum = consum * people;
    if(vipoption ==1)
        {
            consum = (consum*discount);
        }
    printf("消費金額 = %.0f",consum);
    return 0;
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float consum = 400;  //消費
    float discont = 0.9; //vip 9折
    int vip_option = 0;  // 選項
    int count = 0;
    cout << "持VIP(1 有VIP , 2 無) :";
    cin >> vip_option;

    cout << "消費人數 :";
    cin >> count;
    consum = consum * count;
    if (vip_option == 1)
    {
        consum = (consum * discont);
    }
    cout << "消費金額 : " << consum;
    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

### **2. 雙重選擇**

**若事件有兩種狀況，例如：if ... else**

![](../.gitbook/assets/image%20%2827%29.png)



1. 假設輸入成績及格為60分，若有及格都會顯示及格 ，其餘不及格。

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score;
    cout << "輸入成績";
    cin >> score;

    if (score < 60)
    {
        cout << "及格";
    }
    else
    {
        cout << "不及格";
    }

    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

### **3. 多重選擇**

如果狀況有極多得可能，或是想輸出不同資料時候。

**例如：**if...else if...else、switch

![](../.gitbook/assets/image%20%2828%29.png)

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

\*\*\*\*

