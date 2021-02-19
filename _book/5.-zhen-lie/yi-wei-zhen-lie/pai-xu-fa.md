# 排序法

## 氣泡排序法\(Bubble Sort \)

這個是將相鄰兩個資料逐一比較，資料是否需要互相交換位置。

### 範例

將 26、12、6 、  10、 58  用氣泡排序法從小排到大。

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

### 

## 插入排序法\(Insertion Sort\)

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

## 選擇排序法\(Selection Sort\)

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

線性搜尋法 - Sequential Search

二分搜尋法 - Binary Search 

