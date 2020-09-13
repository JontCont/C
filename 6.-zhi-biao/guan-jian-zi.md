# 關鍵字

## const

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

## volatile

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

## inline

 inline 可以將修飾的函式設為行內函式，即像巨集 \(define\) 一樣將該函式展開編譯，用來加速執行速度。  
inline 和 \#define 的差別在於：

* inline 函數只對參數進行一次計算，避免了部分巨集易產生的錯誤。
* inline 函數的參數類型被檢查，並進行必要的型態轉換。
* 巨集定義盡量不使用於複雜的函數
* 用 inline 後編譯器不一定會實作，僅為建議。





