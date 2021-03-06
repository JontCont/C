# 六、指標

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

{% hint style="info" %}
取址運算子\(作用在變數名稱前\)

& 變數名稱
{% endhint %}

  
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


## 傳值、傳址

### 傳值 call by value

最常見的函式寫法，呼叫者和被呼叫者的變數各自佔有記憶體，將參數複製再傳給函式，而 **C語言目前只有這個功能**。

### 傳址 call by reference\(address\)

 呼叫者和被呼叫者的變數使用相同的記憶體位址，因此在被呼叫函式中改變變數時，變動結果會保留。\(C++ 才有，寫法為 type func\(type &var\) { ... }\)

## 關鍵字

### const

 const 通常表示只可讀取不可寫入的變數，常用來宣告常數。使用 const 有以下好處：

* 使編譯器保護那些不希望被改變的參數
* 給優化器一些附加的資訊
* 提升程式碼可讀性

{% hint style="info" %}
 **const vs \#define**  
編譯器處理方式 : define 在預處理階段展開；const 在編譯階段使用。

1. 類型和安全檢查 : const 會在編譯階段會執行類型檢查，define 則不會。
2. 存儲方式 : define 直接展開不會分配記憶體，const 則會在記憶體中分配。
{% endhint %}

### volatile

 由於嵌入式系統常處理 I/O、中斷、即時操作系統 \(RTOS\) 相關的問題，因此在嵌入式系統開發中 volatile 尤為重要。被 volatile 修飾的變數代表它可能會被不預期的更新，因此告知編譯器不對它涉及的地方做最佳化，並在每次操作它的時候都讀取該變數實體位址上最新的值，而不是讀取暫存器的值。  
  
volatile 常見的應用：

1. 修飾多執行緒 \(multi-threaded\) 的全域變數。
2. 設備的硬體暫存器 \(如狀態暫存器\)
3. 修飾中斷處理程式中 \(ISR\) 中可能被修改的全域變數。

{% hint style="info" %}
 **const 和 volatile 合用**

```cpp
extern const volatile unsigned int rt_clock;
```

  
這是在 RTOS kernel 常見的一種宣告：rt\_clock 通常是指系統時鐘，它經常被時鐘中斷進行更新。所以它是 volatile。因此在用的時候，要讓編譯器每次從記憶體裡面取值。而 rt\_clock 通常只有一個寫者（時鐘中斷），其他地方對其的使用通常都是唯讀的。所以將其聲明為 const，表示這裏不應該修改這個變數。所以 volatile 和 const 是兩個不矛盾的東西，並且一個物件同時具備這兩種屬性也是有實際意義的。
{% endhint %}

### inline

 inline 可以將修飾的函式設為行內函式，即像巨集 \(define\) 一樣將該函式展開編譯，用來加速執行速度。  
inline 和 \#define 的差別在於：

* inline 函數只對參數進行一次計算，避免了部分巨集易產生的錯誤。
* inline 函數的參數類型被檢查，並進行必要的型態轉換。
* 巨集定義盡量不使用於複雜的函數
* 用 inline 後編譯器不一定會實作，僅為建議。

## 未定義行為 \(Undefined behavior\)

### \[補充\] 常見的語法 i++ 和 ++i 具有以下性質：

* i++ : 先用 i ，再將 i+1
* ++i : 先 i+1，再用 i 。

  
因此會出現這種問題：

```text
int i = 10
i = i++ + ++i;
```

這個問題的標準答案是

```text
i = i++ + ++i;
i = 10 + ++i;
i = 10 + 12;
i = 22
```

但是這是有爭議的！編譯時會有警告訊息  


