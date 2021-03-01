# 生命週期

#### 每個變數都會有其存在期間\(Storage Duration\)，執行時變數存活的時間

* 自動存在期間：自動變數
* 靜態存在期間：全域變數、靜態變數
* 動態存在期間

## 變數範圍和生命周期

1. **local 區域變數** : local 變數僅活在該函式內，存放位置在 stack 或 heap 記憶體中。
2. **static 靜態變數** : static 變數生命周期 \(life time\) 跟程式一樣長，而範圍 \(scope\) 則維持不變，即在宣告的函式之外仍無法存取 static 變數。
3. **global 全域變數** : 所有區段皆可使用此變數。

{% hint style="info" %}
###   **static vs global**

static 變數只有宣告的檔案可以使用；而 global 變數可加上 extern 關鍵字修飾，即可在其他檔案以 .h 標頭檔方式使用該變數 \(也就是 internal linkage 和 external linkage 的不同\)。
{% endhint %}

###  **記憶體的配置**

* **Stack** : 存放函數的參數、區域變數等，由空間配置系統自行產生與回收。\(會稱作 stack 是由於其配置遵守 LIFO\)
* **Heap** : 一般由程式設計師分配釋放，執行時才會知道配置大小，如 malloc/new 和 free/delete。\(注意其資料結構不是 DS 中的 heap 而是 link-list\)
* **Global** : 包含 BSS \(未初始化的靜態變數\)、data section \(全域變數、靜態變數\) 和 text/code \(常數字元\)。

![](../.gitbook/assets/image%20%2835%29.png)

### 配置練習

```cpp
static int num_a;
// 專屬於整個檔案的全域變數，其他檔案不能存取

void func (int num_b) { // stack 區 
 int num_c; // stack 區

 static int num_d; 
 //scope不變，只能在函數 func 內呼叫，但 lifetime 是整支程式執行的時間。
}

```

### static 練習

```cpp
static int num_a;
// 專屬於整個檔案的全域變數，其他檔案不能存取

void func (int num_b) { // stack 區 
 int num_c; // stack 區

 static int num_d; 
 //scope不變，只能在函數 func 內呼叫，但 lifetime 是整支程式執行的時間。
}
```

