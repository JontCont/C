# 3. 變數宣告

開始前，先注意一下，C語言 輸出輸入方式。

printf\(\) 顧名思義是指 "打印的格式化"，print-format 。

一開始使用，已經知道 printf 的作用 =&gt; printf\("你要輸入的內容"\);

## 那如何配合 變數型式顯示?

名稱稱為 "輸出格式化"

我們之所以會用到是因為他本身是不法正常寫入字串內部執行，需要有擷取方式到字串中。  
下方是我們常見的格式化輸出。

* `%d` 或 `%i`：整數
* `%f`：浮點數
* `%c`：字元
* `%s`：字串 \(即字元陣列\)
* `%p`：指標位址

### 參考 

{% embed url="https://docs.microsoft.com/zh-tw/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=vs-2019" %}

### 結論

**int out content =已經是字串不能再更改 ，%d 告訴這個擷取逗號後的 i 值到 %d 內。  
所以會變成 =&gt; int out content 5**。

`int i =5;    
printf(" int out content %d", i );`

\*\*\*\*

### 補充

下方為 stdio.h 的函數

```text
    _Check_return_opt_
    _CRT_STDIO_INLINE int __CRTDECL printf(
        _In_z_ _Printf_format_string_ char const* const _Format,
        ...)

    #if defined _NO_CRT_STDIO_INLINE
    ;
    #else
    {
        int _Result;
        va_list _ArgList;
        __crt_va_start(_ArgList, _Format);
        _Result = _vfprintf_l(stdout, _Format, NULL, _ArgList);
        __crt_va_end(_ArgList);
        return _Result;
    }
    #endif
```

