# 傳值、傳址

## 傳值 call by value

最常見的函式寫法，呼叫者和被呼叫者的變數各自佔有記憶體，將參數複製再傳給函式，而 **C語言目前只有這個功能**。

## 傳址 call by reference\(address\)

 呼叫者和被呼叫者的變數使用相同的記憶體位址，因此在被呼叫函式中改變變數時，變動結果會保留。\(C++ 才有，寫法為 type func\(type &var\) { ... }\)

