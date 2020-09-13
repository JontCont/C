# 前處理器相關

前處理器主要處理加入檔案 \#include、巨集定義 \#define 和 \#undef 條件編譯。

### **1.巨集 \#define**

 \#define 是巨集，在前置處理器 \(preprocessor\) 執行時處理，將要替換的程式碼展開做文字替換。define 語法範例如下：

```cpp
#define PI 3.1415926    //常數巨集
#define A(x) x    //函數巨集
#define MIN(A，B)  ( (A)  <= (B) ? (A) : (B))
```

注意把參數用括號括起來，不然容易發生以下錯誤

```cpp
#define SUM(a,b)  a+b
```

  
當 SUM\(2,5\)\*10 時，因為沒有括弧先乘除後加減，得輸出為 52，錯誤。  


### **2.引入防護和條件編譯**

引入防護 \(Include guard\) 是一種條件編譯，用於防範 \#include 指令重複引入的問題。

```cpp
/* 避免重複引入 */
#ifndef MYHEADER
#define MYHEADER
...
#endif
```

  
第一次被引入時會定義巨集 MYHEADER，再次引入時判斷 \#ifndef 測試失敗，因此編譯器會直接跳到 \#endif，由此避免了重複引用。另有非標準的指令 \#pragma once 提供相同效果，但由於可攜性不如上例，因此大多時候還是上面提到的方法為主。  
  
條件編譯還有一些其它應用：

```cpp
/* 若前處理器已經 define MYHEADER，就編譯 part A，否則編譯 part B。 */
#ifdef MYHEADER
#define MYHEADER
   // part A
#else
   // part B
#endif

/* DEBUG flag */
#ifdef DEBUG
   print ("device_open(%p) ", file);
#endif
```

