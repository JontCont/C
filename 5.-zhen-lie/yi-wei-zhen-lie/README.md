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

### 資料搜尋

#### 線性搜尋法 - Sequential Search

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

二分搜尋法 - Binary Search 

