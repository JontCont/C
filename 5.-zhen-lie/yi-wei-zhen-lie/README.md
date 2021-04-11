---
description: 陣列 - 使用C語言為範例
---

# 一維陣列

## 一維陣列

一維陣列宣告語法如下：

{% hint style="info" %}
資料型態　陣列名稱　\[ 行數 n \]
{% endhint %}

### 說明

1. 資料型態
2. 陣列名稱
3. 行數 n ：ｎ為整數。代表此陣列維度１有ｎ個元素。
4. 一維陣列，只有一個［］
5. 註標或索引的範圍介於0與n-1之間

### 初始化

{% hint style="info" %}
資料型態　陣列名稱［行數 n］ ={ 初始值 a 1, 初始值 a2... ,初始值a3 };
{% endhint %}



### 一維陣列 - 範例

輸入一星期每天花費的費用，印出總花費\(請用陣列\)。

{% tabs %}
{% tab title="C" %}
```csharp
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m[7], total=0;
    for(int i = 0 ; i< 7 ; i ++){
        printf("輸入星期 %d 的花費",i+1);
        scanf("%d",&m[i]);
        total+=m[i];
    }
    printf("一星期花費:%d\n",total);

    return 0;
}

```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

## 字串

字串是由多個字組成的資料，必以'\0'\(空字元\)作為結束字串資料的結束。因此字串可用一維字元陣列的形式表示。

字串陣列宣告方式

{% hint style="info" %}
char 字串陣列名稱 \[ 字串長度 +1 \]
{% endhint %}

若是用字串存8bytes 的內容

```c
char id[9]; 
// 0-8 共有9個 
```

設定初始設定語法有下列方法

```c
char arrayname[長度 +1] = "字串內容";
char arrayname [長度+1] ={'字元1','字元2'...}
```

## 排序法

### 氣泡排序法\(Bubble Sort \)-範例

這個是將相鄰兩個資料逐一比較，資料是否需要互相交換位置。將 26、12、6 、  10、 58  用氣泡排序法從小排到大。

```c
void SelSort(int A[], int n)  //選擇排序法之副程式
 {
   int i, j, Temp, Min = 0;
   for (i = 1; i <= n - 1; i++)
    {
       Min = i;
       for (j = i + 1; j <= n; j++)
          if (A[j] < A[Min])
             Min = j;
      {//相鄰兩個的資料交換位置
       Temp = A[i];
       A[i] = A[Min];
       A[Min] = Temp;
      }
    }
 }
```

### 插入排序法\(Insertion Sort\)

* 依序由未排序的資料中選一筆資料
* 一一掃瞄已排序資料，將選取的資料插入正確位置

```c
 void InSort(int A[], int n)  
 {
   int i, j, Temp;
   for (i = 1; i <= n; i++)
    {
     Temp=A[i];
     j=i-1;
     while (Temp<A[j])
      {
        A[j+1]=A[j];
        j--;
        if(j==-1)
          break;
      }
      A[j+1]=Temp;
    }
 }
```

### 選擇排序法\(Selection Sort\)

```c
void SelSort(int A[], int n)  //選擇排序法之副程式
 {
   int i, j, Temp, Min = 0;
   for (i = 1; i <= n - 1; i++)
    {
       Min = i;
       for (j = i + 1; j <= n; j++)
          if (A[j] < A[Min])
             Min = j;
      {//相鄰兩個的資料交換位置
       Temp = A[i];
       A[i] = A[Min];
       A[Min] = Temp;
      }
    }
 }
```

## 資料搜尋

### 線性搜尋法 - Sequential Search

 1.無崗哨\(衛兵\)線性搜尋\(Non-Sentinel Linear Search\)

* 直接對數列由右至左，或由左至右一一比對是否有與鍵值相同的元素
* 需比對**陣列值是否與鍵值相同**、**陣列是否結束**

 2.崗哨\(衛兵\)線性搜尋\(Sentinel Linear Search\)

* 直接對數列由右至左，或由左至右一一比對
* 將鍵值放在陣列的**第一個**或**最後一個**元素，並把這個元素當成**崗哨\(衛兵\)**
  * 一定可以找到與鍵值相同的元素 ⇒ 避免檢查**陣列是否結束**
* 因為省下一次比較的時間，當資料很大時，時間約為**無崗哨線性搜尋**的一半\(時間複雜度仍為Ο\(n\)\)

#### 特性：

* 資料不需事先排序
* 支援**隨機存取\(Random Access\)**與**循序存取\(Sequential Access\)**機制
* 時間複雜度為Ο\(n\) ⇒ 線性

#### 時間複雜度\(Time Complexity\)

* \(1+2+3+...+n\)/n = \(n+1\)/2 ⇒ Ο\(n\)

```c
#include<stdio.h>
#include<stdlib.h>

void main (){
    int search_Ctr[] = {6,1,7,2,8,3,8,4,9,5,10};//初始內容
    int Ctr_Max = sizeof(search_Ctr)/sizeof(search_Ctr[0]); //陣列的長度
    int key = 0;int index = 0;  // key =需要搜尋的值  
    scanf("%d",&key);

    while (index < Ctr_Max)
    {
        if(search_Ctr[index] == key){ printf("key is %d ",index); break;}
        index++;
        if(index>= Ctr_Max) {printf("Not key");}
    }
}
```

### 二分搜尋法 - Binary Search 

是一種在有序陣列中搜尋某一特定元素的搜尋演算法。搜尋過程從陣列的中間元素開始，如果中間元素正好是要搜尋的元素，則搜尋過程結束；如果某一特定元素大於或者小於中間元素，則在陣列大於或小於中間元素的那一半中搜尋，而且跟開始一樣從中間元素開始比較。如果在某一步驟陣列為空，則代表找不到。這種搜尋演算法每一次比較都使搜尋範圍縮小一半。

二分搜尋演算法在[最壞情況](https://zh.wikipedia.org/w/index.php?title=%E6%9C%80%E5%9D%8F%E6%83%85%E5%86%B5&action=edit&redlink=1)下是[對數時間複雜度](https://zh.wikipedia.org/wiki/%E6%97%B6%E9%97%B4%E5%A4%8D%E6%9D%82%E5%BA%A6#%E5%AF%B9%E6%95%B0%E6%97%B6%E9%97%B4)的，需要進行{O\(\log n\)}![O\(\log n\)](https://wikimedia.org/api/rest_v1/media/math/render/svg/aae0f22048ba6b7c05dbae17b056bfa16e21807d)次比較操作![n](https://wikimedia.org/api/rest_v1/media/math/render/svg/a601995d55609f2d9f5e233e36fbe9ea26011b3b)在此處是陣列的元素數量，![O](https://wikimedia.org/api/rest_v1/media/math/render/svg/9d70e1d0d87e2ef1092ea1ffe2923d9933ff18fc)是[大O記號](https://zh.wikipedia.org/wiki/%E5%A4%A7O%E7%AC%A6%E5%8F%B7)，![\log ](https://wikimedia.org/api/rest_v1/media/math/render/svg/79e4debd0ab1c6ce342d0172a7643733305c37bc)是[對數](https://zh.wikipedia.org/wiki/%E5%AF%B9%E6%95%B0)）。二分搜尋演算法使用常數空間，對於任何大小的輸入資料，演算法使用的空間都是一樣的。除非輸入資料數量很少，否則二分搜尋演算法比線性搜尋更快，但陣列必須事先被排序。儘管一些特定的、為了快速搜尋而設計的資料結構更有效（比如[雜湊表](https://zh.wikipedia.org/wiki/%E5%93%88%E5%B8%8C%E8%A1%A8)），二分搜尋演算法應用面更廣。

```c
#include<stdio.h>
#include<stdlib.h>
void search(int *search_Ctr, int target, int key);

void main (){
    int search_Ctr[] = {1,2,3,4,5,6,7,8,9,10};//初始內容
    int Ctr_Max = sizeof(search_Ctr)/sizeof(search_Ctr[0]); //陣列的長度
    int key = 0;int index = 0;  // key =需要搜尋的值  
    scanf("%d",&key);
    search(search_Ctr, Ctr_Max , key);
}

void search(int *search_Ctr, int target ,int key){
    int index = 0 ,low= 0, height = target-1 ;
    while (index < target)
    {
        int mid = (height + low) / 2 ;
        if(search_Ctr[mid]< key){
            low = mid+1;
        }
        else if(search_Ctr[mid] > key){
            height = mid-1;
        }
        else {
            printf("%d ",mid);
            break;
        }
        index++;
    }
    
}

```

## 亂數種子 - rand\(\)及srand\(\)

### time\(\)函數

使用srand\(\)來設定亂數種子，其來源可以是CPU、記憶體、時間等，最常用時間來當亂數種子，必須**使用time\(\)函數時須include&lt;time.h&gt;。**

```c
srand((unsigned) time(NULL));  
```

只要放在程式一開始的地方，千萬別放在跑亂數的迴圈中，因為CPU執行指令極快速，取的時間種子相差很小，而你取出來的每個數字都會很相近。

不過用取時間種子還有個缺點，當使用者在一秒執行程式數次，因為取時間是以秒為單位，所以會出現很相近的亂數，改善的方式就是將時間再跟其他來源作運算。例如用PID：

```c
srand((unsigned) time(NULL) + getpid());
```

### **整數亂數**

rand\(\)這個函數會隨機產生0~RAND\_MAX的數字，而RAND\_MAX為編譯器設定的數字，可以用Printf\("%d",RAND\_MAX\)來查看。要產生特定範圍的亂數只要先產生0~1的隨機數就可以完成，產生down~up的亂數公式如下：

```c
#[down, up] 含上界
rand_num = <up-down> * rand() / RAND_MAX + <down>;
#[down, up) 不含上界
rand_num = <up-down> * rand() / (RAND_MAX + 1) + <down>; 
```



很多人會用取mod來算亂數，但這樣會有些數字機率較小，相較而言用上述方法就比較好。  
例如我要產生15~30之間的數字 ，也就是\[15, 30\]：

```c
rand_num = (30-15) * rand() / (RAND_MAX) + 15
```

範例程式是產生10個1到100的亂數：

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
 int n = 10;
 srand((unsigned) time(NULL) + getpid());
 while(n-- > 0)
  printf("%d\n", 99 * rand() / RAND_MAX + 1); 
 return 0;
}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

### **小數亂數**

 將整數亂數的公式改一下就可以實現小數亂數了，如下：

```c
#[down, up] 含上界
rand_num = <up-down> * rand() / RAND_MAX + <down>;
 
#[down, up) 不含上界
rand_num = <up-down> * rand() / (RAND_MAX + 1.0) + <down>;
```

 例如我要產生-3.0~3.0 之間的數字，也就是\[-3.0, 3.0\]：

```c
rand_num = (3.0 - (-3.0)) * rand() / RAND_MAX + (-3.0);
```

 下面這個範例程式是產生10個-5.0到5.0的亂數：

{% tabs %}
{% tab title="C" %}
```c
#include <stdlib.h>
#include <time.h>
 
int main() {
 int n = 10;
 srand((unsigned) time(NULL) + getpid());
 while(n-- > 0)
  printf("%lf\n", 10.0 * rand() / RAND_MAX - 5.0); 
 return 0;
}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

### **不重複亂數**

要產生不重複的亂數有很多方法，最簡單的就是暴力產生，比對過去產生的數字有相同就重新取，但如果數字一多效率就很差，所以建議要去量大的不重複亂數，可以使用洗牌法來取。所謂洗牌法就像玩撲克牌一樣，將欲取的亂數放入陣列，再進行洗牌的動作將數字打亂，之後再取出。

下面這個程式是產生30個1到100不重複亂數：

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define Size 100
#define Num 30
int main() {
 int i, poker[Size], temp, pos;
 srand((unsigned) time(NULL) + getpid());
 //放入數字
 poker[0] = 100;
 for(i = 1; i < Size; ++i)
  poker[i] = i;
  
 //洗牌
 for(i = 0; i < Size; ++i){
  pos = 99 * rand() / RAND_MAX;
  temp = poker[i];
  poker[i] = poker[pos];
  poker[pos] = temp;
 } 
 //印出前30個字 
 for(i = 0; i < Num; ++i)
  printf("%d ", poker[i]);
 return 0;
}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

### **不均勻機率亂數**

如果是要機率不同的亂數，可以使用陣列來模擬，數量多了話則可以用IF來判斷。

例如有一個抽獎系統，獎品分為特獎、頭獎、二獎、三獎、四獎、五獎、安慰獎，機率分別為0.00001、0.00005、0.0001、0.001、0.01、0.1、0.88884且和為1，把它們都乘上100000後分別為1、5、10、100、1000、10000、88884，這樣就可以藉由亂數產生1~100000來模擬不均勻機率抽獎，下面為範例程式：

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define A1 1
#define A2 5
#define A3 10
#define A4 100
#define A5 1000
#define A6 10000
#define A7 88884
#define Total 100000 
int main() {
 int r;
 srand((unsigned) time(NULL) + getpid());
 printf("歡迎來到「不均勻機率抽獎系統」\n");
 system("PAUSE"); 
 while(1){
  r = (Total - 1) * rand() / RAND_MAX + 1;
  if(r == A1)
   printf("# 恭喜獲得「特獎」\n");
  else if(r > A1 && r <= A2 + A1)
   printf("# 恭喜獲得「頭獎」\n");
  else if(r > A2 + A1 && r <= A3 + A2 + A1)
   printf("# 恭喜獲得「二獎」\n");
  else if(r > A3 + A2 + A1 && r <= A4 + A3 + A2 + A1)
   printf("# 恭喜獲得「三獎」\n");
  else if(r > A4 + A3 + A2 + A1 && r <= A5 + A4 + A3 + A2 + A1)
   printf("# 恭喜獲得「四獎」\n");
  else if(r > A5 + A4 + A3 + A2 + A1 && r <= A6 + A5 + A4 + A3 + A2 + A1)
   printf("# 恭喜獲得「五獎」\n");
  else
   printf("# 恭喜獲得「安慰獎」\n");
  system("PAUSE");
 }
 return 0;
}
 
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}



