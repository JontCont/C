# 動態配置記憶體

 C 語言動態記憶體配置的相關函數位於 `stdlib.h` 這個 C 語言的標準函式庫中，以下是主要的幾個函數：

```text
void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void free(void *ptr);
void *realloc(void *ptr, size_t size);
```

這幾個函數的功用如下：`malloc` 函數`malloc` 代表 memory allocation，用來配置指定大小的記憶體空間，傳回新空間第一個位元組的記憶體位址，配置的空間處於尚未初始化的狀態。`calloc` 函數`calloc` 代表 contiguous allocation，用來配置陣列用的記憶體空間，傳回新空間第一個位元組的記憶體位址，配置的空間會被初始化為 `0`。`free` 函數釋放之前使用 `malloc` 或 `calloc` 函數所配置的記憶體空間。`realloc` 函數改變已配置記憶體空間的大小。

這些函數的詳細說明，可以參考 malloc\(3\) 的 man page：

```text
man 3 malloc
```

以下是一些 C 語言配置與管理記憶體的範例程式碼。

### 典型記憶體配置

C 語言中最常被使用的記憶體管理方式就是使用 `malloc` 配置記憶體，並配合 `free` 來釋放記憶體。

#### 一維陣列

這是使用 `malloc` 與 `free` 配置一維動態陣列的例子。

```text
#include <stdio.h>
#include <stdlib.h>
int main() {
  // 用來管理動態記憶體的指標
  int *dynArr;

  // 指定空間大小
  int arrLen = 10;

  // 取得記憶體空間
  dynArr = malloc( arrLen * sizeof(int) );

  if( dynArr == NULL ) {
    // 無法取得記憶體空間
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }

  // 使用動態取得的記憶體空間
  int i;
  for (i = 0; i < arrLen; ++i) {
    dynArr[i] = i;
    printf("%d ", dynArr[i]);
  }

  // 釋放記憶體空間
  free(dynArr);

  return 0;
}
```

在 C 語言中動態配置的記憶體都必須配合指標來管理，這個範例中我們需要動態建立一個整數（`int`）的陣列，所以一開始先宣告一個整數的指標 `dynArr`，接著使用 `malloc` 配置指定大小的記憶體空間給這個陣列使用。

`malloc` 在配置新的記憶體空間之後，會傳回指向該空間第一個位元組（byte）的指標，而在無法取得新的記憶體空間時（例如系統的記憶體不夠的時候），就會傳回 `NULL`，所以在使用動態配置的記憶體空間之前，要先檢查是否有配置成功。

當記憶體空間使用完之後，再呼叫 `free` 來將該記憶體空間釋放掉，這個動作不可以忘記，否則就會造成[記憶體洩漏（memory leak）](https://zh.wikipedia.org/wiki/%E5%86%85%E5%AD%98%E6%B3%84%E6%BC%8F)的問題。

一般來說在程式中只要呼叫一次 `malloc`，後續就要對應一次的 `free` 呼叫，確保每一次配置的記憶體在使用完之後，都有被妥善釋放。

#### 二維陣列

這是拿一塊動態配置的記憶體空間，建立二維陣列的一種作法：

```text
#include <stdio.h>
#include <stdlib.h>
int main() {
  int *dynArr;

  // 指定空間大小
  int arrLen1 = 10;
  int arrLen2 = 5;

  // 取得記憶體空間
  dynArr = malloc( arrLen1 * arrLen2 * sizeof(int) );

  if( dynArr == NULL ) {
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }

  // 使用動態取得的記憶體空間
  int i, j;
  for (i = 0; i < arrLen1; ++i) {
    for (j = 0; j < arrLen2; ++j) {
      int index = i * arrLen2 + j;
      dynArr[index] = index;
      printf("%d ", dynArr[index]);
    }
  }

  // 釋放記憶體空間
  free(dynArr);

  return 0;
}
```

這種作法其實跟一維陣列的記憶體配置方式類似，只是在配置記憶體時取得二維陣列所需的空間，然後將二維陣列的兩個索引（`i` 與 `j`）自己轉換成一維的索引（`index`），這樣就可以按照一維的方式來使用動態配置的記憶體，這種實作方式在 C 語言的程式中很常見。

### 初始化陣列記憶體配置

記憶體在剛配置好時，裡面所儲存的資料都是沒有用的東西（亂七八糟，每次執行程式都有可能不同），一定要在資料儲存進去之後，才能把裡面的資料拿來使用，而記憶體第一次被指定值的動作就稱為初始化（initialize）。

初始化陣列記憶體的方法有好幾種，以下是常見的做法。

#### `calloc` 函數

除了使用 `malloc` 之外，也可以使用 `calloc` 配置初始化的陣列記憶體，這兩個函數用法大同小異，只是參數的指定方式不同，以及有無初始化而已，以下是兩種函數寫法的比較。

```text
// 未初始化的一維陣列
dynArr = malloc( arrLen * sizeof(int) );

// 已初始化的一維陣列
dynArr = calloc( arrLen, sizeof(int) );

// 未初始化的二維陣列
dynArr = malloc( arrLen1 * arrLen2 * sizeof(int) );

// 已初始化的二維陣列
dynArr = calloc( arrLen1 * arrLen2, sizeof(int) );
```

透過 `calloc` 所取得的記憶體空間，其值會被自動初始化為 `0` 或 `NULL`，在釋放記憶體時跟 `malloc` 一樣都是呼叫 `free` 函數並傳入指向記憶體的指標。以下是一個範例：

```text
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int *dynArr;
  int arrLen = 10;
  // 配置記憶體，並初始化
  dynArr = calloc( arrLen, sizeof(int) );
  if( dynArr == NULL ) {
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }
  int i;
  for (i = 0; i < arrLen; ++i) {
    printf("%d ", dynArr[i]);
  }
  free(dynArr);
  return 0;
}
```

這個程式執行的的輸出為：

```text
gcc source.c
./a.out
```

```text
0 0 0 0 0 0 0 0 0 0
```

#### `memset` 函數

另外一種初始化的方式是使用 `memset` 函數：

```text
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int *dynArr;
  int arrLen = 10;
  // 配置未初始化的記憶體空間
  dynArr = malloc( arrLen * sizeof(int) );
  if( dynArr == NULL ) {
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }
  // 將記憶體初始化為 0
  memset(dynArr, 0, arrLen * sizeof(int));
  int i;
  for (i = 0; i < arrLen; ++i) {
    printf("%d ", dynArr[i]);
  }
  free(dynArr);
  return 0;
}
```

`memset` 函數的第一個參數是指向記憶體的指標，第二個參數是一個常數值，在初始化時會將此常數轉換為 `unsigned char` 型別，指定給記憶體中的每一個位元組，而第三個參數則是記憶體空間的大小。這個程式執行的的輸出為：

```text
gcc source.c
./a.out
```

```text
0 0 0 0 0 0 0 0 0 0
```

### 改變配置的記憶體空間大小

如果在使用動態配置的記憶體空間時，突然發現空間不足，需要再擴充，或是配置的空間太大，需要釋放掉一些時，可以使用 `realloc` 函數來處理。以下是簡單的範例：

```text
#include <stdio.h>
#include <stdlib.h>
int main() {
  int *dynArr;
  int arrLen = 10;

  // 取得記憶體空間
  dynArr = malloc( arrLen * sizeof(int) );
  if( dynArr == NULL ) {
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }

  // 擴充記憶體空間
  arrLen = 20;
  dynArr = realloc( dynArr, arrLen * sizeof(int) );

  // 確認有正常取得調整後的空間
  if( dynArr == NULL ) {
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }

  // 使用動態取得的記憶體空間
  int i;
  for (i = 0; i < arrLen; ++i) {
    dynArr[i] = i;
    printf("%d ", dynArr[i]);
  }

  // 縮減記憶體空間
  arrLen = 5;
  dynArr = realloc( dynArr, arrLen * sizeof(int) );

  // 確認有正常取得調整後的空間
  if( dynArr == NULL ) {
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }

  // 使用動態取得的記憶體空間
  for (i = 0; i < arrLen; ++i) {
    dynArr[i] = i;
    printf("%d ", dynArr[i]);
  }

  free(dynArr);
  return 0;
}
```

`realloc` 可以用來擴充或是縮減已經配置好的記憶體空間，第一個參數是之前配置的記憶體空間指標，而第二個參數則是新的空間大小。

在擴充記憶體空間時會從後方新增更多的空間，原本空間中所儲存的資料會被保留，而後方新增的空間則是會處於未初始化的狀態；縮減記憶體空間時，同樣也是從空間後方開始縮減，前段未被縮減餓空間中所儲存的資料也會被保留。擴充記憶體空間通常是很耗時的動作，因為如果已配置的記憶體空間在擴充時，其後方沒有足夠的剩餘記憶體空間，系統就會在另外一個地方再找一塊足夠大小的記憶體空間，然後把整塊記憶體的資料都搬過去，所以比較好的記憶體配置方式是一次給足，減少記憶體資料搬家的發生頻率。

在使用 `realloc` 調整記憶體空間大小時，如果直接將空間大小調整為 `0`，則其效果就等同於 `free` 函數釋放整塊記憶體空間：

```text
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = (int*) malloc(16);

    // 釋放記憶體，等同於 free(ptr)
    realloc(ptr, 0);

    return 0;
}
```

