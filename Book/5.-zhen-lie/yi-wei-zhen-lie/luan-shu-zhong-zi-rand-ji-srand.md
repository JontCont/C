# 亂數種子 -  rand\(\)及srand\(\)

## time\(\)函數

使用srand\(\)來設定亂數種子，其來源可以是CPU、記憶體、時間等，最常用時間來當亂數種子，必須**使用time\(\)函數時須include&lt;time.h&gt;。**

```c
srand((unsigned) time(NULL));  
```

只要放在程式一開始的地方，千萬別放在跑亂數的迴圈中，因為CPU執行指令極快速，取的時間種子相差很小，而你取出來的每個數字都會很相近。

不過用取時間種子還有個缺點，當使用者在一秒執行程式數次，因為取時間是以秒為單位，所以會出現很相近的亂數，改善的方式就是將時間再跟其他來源作運算。例如用PID：

```c
srand((unsigned) time(NULL) + getpid());
```

## **整數亂數**

rand\(\)這個函數會隨機產生0~RAND\_MAX的數字，而RAND\_MAX為編譯器設定的數字，可以用Printf\("%d",RAND\_MAX\)來查看。要產生特定範圍的亂數只要先產生0~1的隨機數就可以完成，產生down~up的亂數公式如下：

```c
#[down, up] 含上界
rand_num = <up-down> * rand() / RAND_MAX + <down>;
#[down, up) 不含上界
rand_num = <up-down> * rand() / (RAND_MAX + 1) + <down>; 
```



很多人會用取mod來算亂數，但這樣會有些數字機率較小，相較而言用上述方法就比較好。  
例如我要產生15~30之間的數字 ，也就是\[15, 30\]：

```c
rand_num = (30-15) * rand() / (RAND_MAX) + 15
```

範例程式是產生10個1到100的亂數：

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
 int n = 10;
 srand((unsigned) time(NULL) + getpid());
 while(n-- > 0)
  printf("%d\n", 99 * rand() / RAND_MAX + 1); 
 return 0;
}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

## **小數亂數**

 將整數亂數的公式改一下就可以實現小數亂數了，如下：

```c
#[down, up] 含上界
rand_num = <up-down> * rand() / RAND_MAX + <down>;
 
#[down, up) 不含上界
rand_num = <up-down> * rand() / (RAND_MAX + 1.0) + <down>;
```

 例如我要產生-3.0~3.0 之間的數字，也就是\[-3.0, 3.0\]：

```c
rand_num = (3.0 - (-3.0)) * rand() / RAND_MAX + (-3.0);
```

 下面這個範例程式是產生10個-5.0到5.0的亂數：

{% tabs %}
{% tab title="C" %}
```c
#include <stdlib.h>
#include <time.h>
 
int main() {
 int n = 10;
 srand((unsigned) time(NULL) + getpid());
 while(n-- > 0)
  printf("%lf\n", 10.0 * rand() / RAND_MAX - 5.0); 
 return 0;
}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

## **不重複亂數**

要產生不重複的亂數有很多方法，最簡單的就是暴力產生，比對過去產生的數字有相同就重新取，但如果數字一多效率就很差，所以建議要去量大的不重複亂數，可以使用洗牌法來取。所謂洗牌法就像玩撲克牌一樣，將欲取的亂數放入陣列，再進行洗牌的動作將數字打亂，之後再取出。

下面這個程式是產生30個1到100不重複亂數：

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define Size 100
#define Num 30
int main() {
 int i, poker[Size], temp, pos;
 srand((unsigned) time(NULL) + getpid());
 //放入數字
 poker[0] = 100;
 for(i = 1; i < Size; ++i)
  poker[i] = i;
  
 //洗牌
 for(i = 0; i < Size; ++i){
  pos = 99 * rand() / RAND_MAX;
  temp = poker[i];
  poker[i] = poker[pos];
  poker[pos] = temp;
 } 
 //印出前30個字 
 for(i = 0; i < Num; ++i)
  printf("%d ", poker[i]);
 return 0;
}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

## **不均勻機率亂數**

如果是要機率不同的亂數，可以使用陣列來模擬，數量多了話則可以用IF來判斷。

例如有一個抽獎系統，獎品分為特獎、頭獎、二獎、三獎、四獎、五獎、安慰獎，機率分別為0.00001、0.00005、0.0001、0.001、0.01、0.1、0.88884且和為1，把它們都乘上100000後分別為1、5、10、100、1000、10000、88884，這樣就可以藉由亂數產生1~100000來模擬不均勻機率抽獎，下面為範例程式：

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define A1 1
#define A2 5
#define A3 10
#define A4 100
#define A5 1000
#define A6 10000
#define A7 88884
#define Total 100000 
int main() {
 int r;
 srand((unsigned) time(NULL) + getpid());
 printf("歡迎來到「不均勻機率抽獎系統」\n");
 system("PAUSE"); 
 while(1){
  r = (Total - 1) * rand() / RAND_MAX + 1;
  if(r == A1)
   printf("# 恭喜獲得「特獎」\n");
  else if(r > A1 && r <= A2 + A1)
   printf("# 恭喜獲得「頭獎」\n");
  else if(r > A2 + A1 && r <= A3 + A2 + A1)
   printf("# 恭喜獲得「二獎」\n");
  else if(r > A3 + A2 + A1 && r <= A4 + A3 + A2 + A1)
   printf("# 恭喜獲得「三獎」\n");
  else if(r > A4 + A3 + A2 + A1 && r <= A5 + A4 + A3 + A2 + A1)
   printf("# 恭喜獲得「四獎」\n");
  else if(r > A5 + A4 + A3 + A2 + A1 && r <= A6 + A5 + A4 + A3 + A2 + A1)
   printf("# 恭喜獲得「五獎」\n");
  else
   printf("# 恭喜獲得「安慰獎」\n");
  system("PAUSE");
 }
 return 0;
}
 
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}



