# 2-1 整數

## 整數 integer

integer 分成三部分。 int\(整數\) 、long \(長整數\) 、short\(短整數\)。

| 類別 | 名稱 | 位元 | 範圍 |
| :--- | :---: | :---: | :---: |
| int  | 整數 | 4 | -2^31 ~\(2^31-1\) |
| long | 長整數 | 8 | -2^61 ~\(2^61-1\) |
| short | 短整數 | 2 | -2^15 ~\(2^15-1\) |

 在 C11 標準中\( **C11**（也被稱為C1X）指ISO標準**ISO/IEC 9899:2011，為最新C語言標準**\)，建議包括 stdint.h 程式庫，使用 `int8_t`、`int16_t`、`int32_t`、`int64_t` `uint8_t`、`uint16_t`、`uint32_t`、`uint64_t` 等作為整數型態的宣告。



## 測試

如何了解整數運用，先使用變數。而變數（Variable）是指提供具名稱的記憶體儲存空間，一個變數關聯一個資料型態、儲存的值與儲存空間的位址值。

如上圖，所以宣告任何變數會影響到記憶體中存放空間。

陣列\(array\)



## 備註 : C11特性

* 對齊處理（Alignment）的標準化 （包括`_Alignas`標誌符，`alignof`[運算子](https://zh.wikipedia.org/wiki/%E8%BF%90%E7%AE%97%E7%AC%A6)，`aligned_alloc`[函式](https://zh.wikipedia.org/wiki/%E5%87%BD%E6%95%B0)以及`<stdalign.h>`[標頭檔](https://zh.wikipedia.org/wiki/%E5%A4%B4%E6%96%87%E4%BB%B6)）。
* `_Noreturn` 函式標記，類似於 gcc 的 `__attribute__((noreturn))`。
* `_Generic` [泛型](https://zh.wikipedia.org/wiki/%E6%B3%9B%E5%9E%8B)巨集關鍵字。
* [多執行緒](https://zh.wikipedia.org/wiki/%E5%A4%9A%E7%BA%BF%E7%A8%8B)（Multithreading）支援，包括：
  * `_Thread_local`儲存類型識別碼，`<threads.h>`標頭檔，裡面包含了執行緒的建立和管理函式。
  * `_Atomic`類型修飾詞和`<stdatomic.h>`標頭檔。
* 增強的Unicode的支援。基於C Unicode技術報告ISO/IEC TR 19769:2004，增強了對Unicode的支援。包括為UTF-16/UTF-32編碼增加了`char16_t`和`char32_t`資料類型，提供了包含unicode字串轉換函式的標頭檔`<uchar.h>`.
* 刪除了 `gets()` 函式，使用一個新的更安全的函式`gets_s()`替代。
* 增加了[邊界檢查](https://zh.wikipedia.org/wiki/%E8%BE%B9%E7%95%8C%E6%A3%80%E6%9F%A5)函式介面，定義了新的安全的函式，例如 `fopen_s()`，`strcat_s()` 等等。[\[6\]](https://zh.wikipedia.org/wiki/C11#cite_note-N1570-K-6)
* 增加了更多浮點處理巨集。
* 匿名結構體/聯合體支援。這個在gcc早已存在，C11將其引入標準。
* 靜態斷言（Static assertions），`_Static_assert()`，在解釋 `#if` 和 `#error` 之後被處理。
* 新的 `fopen()` 模式，`(“…x”)`。類似 POSIX 中的 `O_CREAT|O_EXCL`，在檔案鎖中比較常用。



