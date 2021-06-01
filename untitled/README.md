# 4. 程式主要結構

寫程式中，需要讓一個程式有靈活度，就是要有 選擇結構，處理大量資要就會有了迴圈結構資料。

1.選擇結構 =&gt;  是一種有真或假的問題，例如是否有帶傘，有或沒有做來讓電腦判別真假。

2. 迴圈結構 =&gt; 根據條件撰寫位置，分為前測式迴圈、後測式迴圈兩種類型。

## 順序結構（Sequence structure）

只要按照解決問題的順序寫出相應的語句就行，它的執行順序是自上而下，依次執行

![Sequence structure](../.gitbook/assets/image%20%2831%29.png)

## 選擇結構 **（Selection Structure）**

### **1.單一選擇**

**這個特性是只有一種狀況，可以使用這方式寫。  
例如：if**

![Selection Structure](../.gitbook/assets/image%20%2829%29.png)

**範例1、假設小名考80，有及格都會顯示及格。**

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

 **範例2**. **假設某家餐廳消費一客400元，持VIP打9折，無VIP則無打折，輸入持有VIP以及消費人數，在打印消費金額**

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

#### 3.登入帳號

{% tabs %}
{% tab title="C" %}
```c
int main()
{
    char username[250]=" ";
    char password[250]=" ";
    const char *user="student";
    const char *pwd="1234";
    printf("enter username & password >> \n");
    scanf("%s %s",&username,&password);
    if(strcmp(username,user)==0 && strcmp(password,pwd)==0)
    {
        printf("welcome !!");
    }
    else printf("error!!");

}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

### **2. 雙重選擇**

**若事件有兩種狀況，例如：if ... else**

![](../.gitbook/assets/image%20%2827%29.png)



**範例1 假設輸入成績及格為60分，若有及格都會顯示及格 ，其餘不及格。**

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("輸入成績:");
    scanf("%d",&score);

    if(score>=60)
        printf("及格");
    else
        printf("不及格");
    
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
    int score;
    cout << "輸入成績";
    cin >> score;

    if (score >= 60)
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

1.利用下面表格判斷成績等級，並顯示成績等級。

| 分數 | 100-90 | 89-80 | 79-70 | 69-60 | 59-0 |
| :--- | :--- | :--- | :--- | :--- | :--- |
| 等級 | A | B | C | D | F |

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("輸入成績:");
    scanf("%d",&score);
    
    if(score>=90)
        printf("A");
    else if (score >=80)
        printf("B");
    else if (score >=70)
        printf("C");
    else if (score >=60)
        printf("D");

    return 0;
}
```
{% endtab %}

{% tab title="C++" %}
```c
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score;
    cout << "輸入成績";
    cin >> score;

    if (score >= 90)
    {
        cout << "level : A";
    }
    else if (score >= 80)
    {
        cout << "level : B";
    }
    else if (score >= 70)
    {
        cout << "level : C";
    }
    else if (score >= 60)
    {
        cout << "level : D";
    }
    else
    {
        cout << "level : F";
    }
    cout << "\n";
    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

2. 使用Switch 解出上方題目

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("輸入成績:");
    scanf("%d",&score);
    
    switch (score/10)
    {
    case 9:
    case 10:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }
    
    return 0;
}
```
{% endtab %}
{% endtabs %}



