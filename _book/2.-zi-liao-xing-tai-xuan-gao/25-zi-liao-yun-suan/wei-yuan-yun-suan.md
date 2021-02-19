# 位元運算

邏輯上的運算子在 C 中的語法分別如下：

* AND （&）
* OR（\|）
* NOT（!）
* XOR（^）// bit值不一樣為 1
* complement（~）
* shift \(&lt;&lt;, &gt;&gt;\)

bitwise 的操作常與 "0x" 這種 16 進位表示法，方便轉換操作。

###  \[例題\] 基本運算

```cpp
unsigned long num_a = 0x00001111;
unsigned long num_b = 0x00000202;
unsigned long num_c;

num_c = num_a & (~num_b);
num_c = num_c | num_b;

printf("%lx", num_c); // 00001313
```

### \[例題\] mask 方法做 bitwise 操作

```cpp
a = a | 7    // 最右側 3 位設為 1，其餘不變。
a = a & (~7) // 最右側 3 位設為 0，其餘不變。
a = a ^ 7    // 最右側 3 位執行 NOT operator，其餘不變。
```

## 複製：memcpy 和 strcpy

### **1. 記憶體複製**

```c
void *memcpy( void *dest, const void *src, size_t count );
```

  
memcpy\(\) 可以複製任何類型資料，不處理字串結束 '\0' 的情況，當 \*src 長度大於 \*dest 時會 buffer overflow \(編譯時不會錯誤\)。  
  


### **2. 字串複製**

```cpp
void *strcpy( void *dest, const void *src);
```

  
strcpy\(\) 只能用於字串複製，不需要指定長度，因為會自動偵測以 '\0' 為結尾，當 \*src 長度大於 \*dest 時會 buffer overflow \(\*dest 將沒有 \0\)。

```cpp
#include <string.h>
#include <stdio.h>
int main (){
 const char *str1 = "abc\0def";
 char str2[16] = {0};
 char str3[16] = {0};

 strcpy(str2, str1);
 memcpy(str3, str1, sizeof(str3)); // 8
 printf("str2 = %s\n", str2);    // str2 = abc
 printf("str3 = %c\n", str3[5]); // str3 = e
 return 0;
}
```

