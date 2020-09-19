# 6. 指標

## 指標 \(pointer\)

宣告語法

{% hint style="info" %}
資料型態  \*指標名稱;
{% endhint %}

一個指向某個儲存位址的變數，語法為

```c
int *ptr = &var;
```

 其中

* & ：取變數位址
* \*  ： 表示為指標變數

  
也可用於函數變為函式指標 \(function pointer\)，語法為

```c
void (*fptr)(type_a, type_b) = &func;
```

 常用的地方如下

函式 sort 時傳入判斷準則

1. multithread 傳函數進入建立 thread 的 API 中
2. callback function \(一種事件導向的函式\)

## **基礎指標判讀**

指標判讀大原則為「從右讀到左」，例如：

```c
int a; // 一個整型數
int *a; // 一個指向整數的指標
int **a; // 一個指向指標的指標，它指向的指標是指向一個整型數
int a[10]; // 一個有10個整數型的陣列
int *a[10]; // 一個有10個指標的陣列，該指標是指向一個整數型的
int (*a)[10]; // 一個指向有10個整數型陣列的指標
int (*a)(int); // 一個指向函數的指標，該函數有一個整數型參數並返回一個整數
int (*a[10])(int); // 一個有10個指標的陣列，該指標指向一個函數，該函數有一個整數型參數並返回一個整數
```

注意宣告兩個指標時不能寫做 int _a, b; 因為前式等價於 int_ a; int b;。連續宣告兩個指標用 int _a,_ b;

## **指標與其他關鍵字混用**

關鍵字 volatile 等等判讀方式相同。

```c
const int * foo; // 一個 pointer，指向 const int 變數。
int const * foo; // 一個 pointer，指向 const int 變數。
int * const foo; // 一個 const pointer，指向 int 變數。
int const * const foo; // 一個 const pointer，指向 const int 變數。
```

## 延伸性資料型態：struct、typedef、union 和 enum

### **1. 結構 struct**

struct 是使用者自定的型態，包含數個不同資料型態的變數，將不同的資料型態關聯在一起，使他們的關聯更直覺。

```cpp
struct [structName] {
 char name[16]; 
 int age;
 struct [structName] *ptr;  
 // 不能含有自己，但可以有自己型別的指標。
};

int main () {
 struct [structName] person1 = {"Amy", 20 }; // 初始化
 person.age = 21; // 操作
}
```

### **2. 重新定義型態名稱 typedef**

typedef 保留字可以為資料型態建立別名，使程式更易閱讀理解。例如：

```cpp
typeof struct [structName] {
 char name[16];
 int age;
 struct [structName] *ptr;
} PERSON;

int main () {
 PERSON person1 = {"Amy", 20 };
 person.age = 21;
}
```

### **3. 列舉 enum**

enum 是一種常數定義方式，可以提升可讀性，enum 裡的識別字會以 int 的型態，從指定的值開始遞增排列 \(預設為 0\)。

```cpp
typedef enum {SUN=0, MON, TUE, WED, THU, FRI, SAT} week_type;
week_type week = WED;
if(week==WED)
    cout<<week<<endl; // 3
```

### **4. 共用結構 union**

  
電腦架構早期記憶體空間比較不足，因此需要使用共用結構讓各變數共用一塊記憶體，union 所需的記憶體空間大小由最大的成員變數決定，例如以下 union 的大小為 8 位元組 \(upper bound double\)。

```cpp
union data{
 char c;
 int num;
 double fnum;
};
union data a, b;
```

  
struct 是每個成員變數都配置一段空間，union 則是共用一段記憶體空間。另外，union 需注意記憶體內的排列方式，如 little-endian 方法排列，int 會放在 double 的 byte 3~0 的位置，從而改變 double 讀取時的值。  


## 

