---
description: 此為只能在迴圈使用，switch 可以單獨使用break
---

# Break、Continue、goto敘述

一般情況是會在違反進入迴圈的限制條件時候，才會結束迴圈運作，若問題是重複執行特定某些的敘述特性外，包刮例外特性必須加上break 或是continue 之敘述，可以方便撰寫程式。

## break 敘述功能使用方式 

break 敘述除了在 switch 的選擇結構外，可以使用在迴圈結構。當執行到break 時候，會跳出程式迴圈結構，並在迴圈外層第一行敘述去做執行。

#### 1.模擬密碼驗證\(假設密碼 : 123456\)，最多可以錯三次密碼。

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

## continue 敘述功能使用方式

continue 中文為\(繼續\)。是不執行迴圈內部某些敘述。

1. 在 for 迴圈結構內使用continue 執行到continue 會跳到該層的for迴圈內的第三部分，做迴圈變數增/減量。
2. 在while 迴圈內部使用 continue 執行到 continue 會跳到該層的while內，檢查迴圈是否成立。
3. 在do...while 迴圈內部使用continue 執行到continue 會跳到do 層的地方。

#### 1.計算出1-100之間有偶數和

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

2. \(遊戲\)兩個人輪流從50顆彈珠中，拿走1~3顆，拿走最後一顆玻璃彈珠的人為輸家。

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

3. 用文字 I LOVE C/C++ language ，呈現跑馬燈的效果直到任意案鍵就結束。

{% tabs %}
{% tab title="C" %}

{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

