# 四、 程式主要結構

寫程式中，需要讓一個程式有靈活度，就是要有 選擇結構，處理大量資要就會有了迴圈結構資料。

1.選擇結構 =&gt;  是一種有真或假的問題，例如是否有帶傘，有或沒有做來讓電腦判別真假。

2. 迴圈結構 =&gt; 根據條件撰寫位置，分為前測式迴圈、後測式迴圈兩種類型。

## 順序結構（Sequence structure）

只要按照解決問題的順序寫出相應的語句就行，它的執行順序是自上而下，依次執行

![Sequence structure](.gitbook/assets/image%20%2831%29.png)

## 選擇結構 **（Selection Structure）**

### **1.單一選擇**

**這個特性是只有一種狀況，可以使用這方式寫。  
例如：if**

![Selection Structure](.gitbook/assets/image%20%2829%29.png)

**範例1、假設小名考80，有及格都會顯示及格。**

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int score = 80;

    if(score>60){
        printf("及格");
    }
    return 0;
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int score = 80;

    if(score>60){
        std::cout<< "及格";
    }
    system("PAUSE");
    return 0;
}

```
{% endtab %}
{% endtabs %}

 **範例2**. **假設某家餐廳消費一客400元，持VIP打9折，無VIP則無打折，輸入持有VIP以及消費人數，在打印消費金額**

{% tabs %}
{% tab title="C" %}
```c
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main() 
{
    float consum = 400;
    float discount = 0.9;
    int vipoption = 0 ;
    int people = 0;

    printf("持有vip卡(1:持有 2:無");
    scanf("%d",&vipoption);
    
    printf("消費人數");
    scanf("%d",&people);
    consum = consum * people;
    if(vipoption ==1)
        {
            consum = (consum*discount);
        }
    printf("消費金額 = %.0f",consum);
    return 0;
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float consum = 400;  //消費
    float discont = 0.9; //vip 9折
    int vip_option = 0;  // 選項
    int count = 0;
    cout << "持VIP(1 有VIP , 2 無) :";
    cin >> vip_option;

    cout << "消費人數 :";
    cin >> count;
    consum = consum * count;
    if (vip_option == 1)
    {
        consum = (consum * discont);
    }
    cout << "消費金額 : " << consum;
    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

#### 3.登入帳號

{% tabs %}
{% tab title="C" %}
```c
int main()
{
    char username[250]=" ";
    char password[250]=" ";
    const char *user="student";
    const char *pwd="1234";
    printf("enter username & password >> \n");
    scanf("%s %s",&username,&password);
    if(strcmp(username,user)==0 && strcmp(password,pwd)==0)
    {
        printf("welcome !!");
    }
    else printf("error!!");

}
```
{% endtab %}

{% tab title="C++" %}

{% endtab %}
{% endtabs %}

### **2. 雙重選擇**

**若事件有兩種狀況，例如：if ... else**

![](.gitbook/assets/image%20%2827%29.png)



**範例1 假設輸入成績及格為60分，若有及格都會顯示及格 ，其餘不及格。**

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("輸入成績:");
    scanf("%d",&score);

    if(score>=60)
        printf("及格");
    else
        printf("不及格");
    
    return 0;
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score;
    cout << "輸入成績";
    cin >> score;

    if (score >= 60)
    {
        cout << "及格";
    }
    else
    {
        cout << "不及格";
    }

    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

### **3. 多重選擇**

如果狀況有極多得可能，或是想輸出不同資料時候。

**例如：**if...else if...else、switch

![](.gitbook/assets/image%20%2828%29.png)

1.利用下面表格判斷成績等級，並顯示成績等級。

| 分數 | 100-90 | 89-80 | 79-70 | 69-60 | 59-0 |
| :--- | :--- | :--- | :--- | :--- | :--- |
| 等級 | A | B | C | D | F |

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("輸入成績:");
    scanf("%d",&score);
    
    if(score>=90)
        printf("A");
    else if (score >=80)
        printf("B");
    else if (score >=70)
        printf("C");
    else if (score >=60)
        printf("D");

    return 0;
}
```
{% endtab %}

{% tab title="C++" %}
```c
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score;
    cout << "輸入成績";
    cin >> score;

    if (score >= 90)
    {
        cout << "level : A";
    }
    else if (score >= 80)
    {
        cout << "level : B";
    }
    else if (score >= 70)
    {
        cout << "level : C";
    }
    else if (score >= 60)
    {
        cout << "level : D";
    }
    else
    {
        cout << "level : F";
    }
    cout << "\n";
    system("PAUSE");
    return 0;
}
```
{% endtab %}
{% endtabs %}

2. 使用Switch 解出上方題目

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("輸入成績:");
    scanf("%d",&score);
    
    switch (score/10)
    {
    case 9:
    case 10:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }
    
    return 0;
}
```
{% endtab %}
{% endtabs %}

## 迴圈結構



迴圈結構描述事件重複現象。迴圈結構有三種：

### 1.FOR - 計數迴圈 / 前測式條件迴圈

{% hint style="info" %}
🧙‍♂️ 使用方式:  

for\( **初始值; 範圍 ; 動作**\){

          陳述列 1;

}
{% endhint %}

當執行迴圈結構開端時，會檢查判斷是否是對的，就會去做執行。

![&#x524D;&#x6E2C;&#x5F0F;&#x689D;&#x4EF6;&#x8FF4;&#x5708;](.gitbook/assets/image%20%2833%29.png)

如何記住使用方式，for 迴圈內，因為有計數之稱，所以會有**初始值、範圍、動作**，這就是寫入for迴圈最簡單的記憶方式。

 1. 寫出1~5相加的結果

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i < 6; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}

```
{% endtab %}

{% tab title="C++" %}
```cpp
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i < 6; i++)
    {
        sum += i;
    }
    cout<<sum;
    return 0;
}

```
{% endtab %}
{% endtabs %}

2. 寫出成績總成績以及平均值

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int count,score,sum = 0;
    float avg = 0;
    printf("請輸入幾科");
    scanf("%d",&count);
    printf("請輸入分數");
    for(int i =0;i<count;i++)
    {
        scanf("%d",&score);
        sum += score;
    }
    avg =(float) sum/count;
    printf("總成績 %d",sum);
    printf("平均 %.1f",avg);

    return 0;
}

```
{% endtab %}

{% tab title="C++" %}
```cpp
int main(int argc, char const *argv[])
{
    int count,score,sum = 0;
    float avg = 0;
    cout<<"請輸入幾科";
    cin>>count;
    cout<<"請輸入分數";
    for(int i =0;i<count;i++)
    {
        scanf("%d",&score);
        sum += score;
    }
    avg =(float) sum/count;
    cout<<"總成績 %d"<<sum;
    cout<<"平均 %.1f"<<avg;

    return 0;
}
```
{% endtab %}
{% endtabs %}

#### 3. 99乘法表

{% tabs %}
{% tab title="C" %}
```c
int main(void)
{
		int i , j,k;
	for(i = 0; i< 9;i+=5,printf("---------------------------------------\n"))
	{
		for(j = 0; j <= 9;j++,printf("\n"))
		{
			for(k=i;k < i+5;k++){  printf("%2d x %1d = %2d ",k,j,k*j);}
		}
	}
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for(int i = 1 ; i< 10 ; i++)
    {
        for(int j = 1 ; j < 10 ; j++)
        {cout<< i <<"*" << j <<"=" << i*j << "\t";}    
        cout<<"\n";
    }
    return 0;
}

```
{% endtab %}
{% endtabs %}

### 2.前測式條件迴圈

for/while 兩種前測式條件迴圈

1.利用while迴圈做出，輸入任意數字，直到0以後才停止，限制1~3。

{% tabs %}
{% tab title="C" %}
```c
void main()
{
    int glass=50; //Glass ball
    int take_ball; 
    int who =1;

    printf("Each person can only take 1-3 glass balls...\n");

    while(1)
    {
        if(scanf("%d",&take_ball)!=1)
        {
            printf("Wrong input format, please try again...\n");
            fflush(stdin);
        }
        else
        {
            if(take_ball>=1 && take_ball<=3)
            {
                glass-=take_ball;
                printf("%d glass balls left\n",glass);
                who++;
                if(who==3) who=1;
                if(glass<=0 || glass==1) {printf("loser : %d \n",who);break;} 
            }
            else{printf("Wrong input format, please try again...\n");}
        }
    }
    
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
int main(int argc, char const *argv[])
{
    int state = 50;
    int get_num = 0;

    cout << "桌上有50顆球 請輸入拿取數量，";
    cout << "範圍1-3\n";
    while (state >= 0)
    {
        cin >> get_num;
        if (get_num > 3 || get_num < 0)
        {
            cout << "請再輸入一次 範圍1-3\n";
        }
        else
        {
            state -= get_num;
        }
        cout << "剩下 " << state << "\n";
    }

    return 0;
}

```
{% endtab %}
{% endtabs %}

2. 輸入一正整數，然後將它倒過來輸出 \(1234 -&gt; 4321\)

{% tabs %}
{% tab title="C++" %}
```cpp
#include <iostream>
int main(int argc, char const *argv[])
{
    int spilt_sum;
    int num, spilt;
    cout << "任意輸入一數字\n";
    cin >> num;
    while (num % 10 != 0)
    {
        spilt = num % 10;
        cout << spilt;
        num /= 10;
    }
    cout << '\n';
    system("pause");
    return 0;
}

```
{% endtab %}

{% tab title="C" %}
```c
#include<stdio.h>

int main(){
    int change = 1234; 
    int befor_num[4]; 
    int multiple = 1000;
    for(int i = 0 ; i < 4 ;i++){
        befor_num[i] = change%10;
        change /=10;
    }
    for(int i = 0 ; i < 4 ;i++){
        change += befor_num[i] *multiple;
        multiple /=10;
    }
    printf("befor  >> %d", change);
}
```
{% endtab %}
{% endtabs %}

#### 3. 一個字元一個字元輸入，Enter鍵才停止，印共輸入幾個字元。

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    while (getche() != '\r')
    {
        ++num;
    }
    printf(" 次數>> %d", num);
    return 0;
}

```
{% endtab %}

{% tab title="C++" %}
```c
int main(int argc, char const *argv[])
{
    int num=0;
    cout << "一個字元一個字元輸入(直到按Enter鍵)\n";
    cin >> num;
    while (getche() != '\r')
    {
        num +=1;
    }
    cout <<"共輸入"<< num << '字元\n';
    system("pause");
    return 0;
}
```
{% endtab %}
{% endtabs %}

getchar\(\)函數是C語言專門為輸入單個字符而提供的，getchar\(\)函數是從I/O字符流中讀取一個字符，必須輸入換行才能讀入字符。

getche\(\)、getch\(\)函數也是讀入單個字符，是從控制台直接讀取一個字符，無須換行即可讀入字符。

{% hint style="info" %}
### 備註 getche\(\)、getch\(\)

 getche\(\)和getch\(\)需要的頭文件是&lt;conio.h&gt;。conio.h不是C標準庫中的頭文件。conio是ConsoleInput/Output（控制台輸入輸出）的簡寫，其中定義了通過控制台進行數據輸入和數據輸出的函數，主要是一些用戶通過按鍵盤產生的對應操作。
{% endhint %}



### 3.後測式條件迴圈

do...while

![&#x5F8C;&#x6E2C;&#x5F0F;&#x689D;&#x4EF6;&#x8FF4;&#x5708;](.gitbook/assets/image%20%2834%29.png)

1.利用do...while\(\) ，模擬販賣機作業流程，投入金額，在選擇飲料。

{% tabs %}
{% tab title="C" %}
```c
int main(int argc, char const *argv[])
{
   string sOption ="";
    do{
        printf("==模擬販賣機作業流程==\n");
        printf("1. 紅茶\n2. 奶茶\n");
        printf("3. 綠茶\nQ. 離開\n");
        sOption = Console.ReadLine();
        printf("請投入金額 >>");
        int cost  = Convert.ToInt32(Console.ReadLine());
        switch(sOption)
        {
            case "1":cost -= 10;break;
            case "2":cost -= 20;break;
            case "3":cost -= 14;break;
        }
        printf("顯示金額 >> %d \n",cost);
    }while(sOption != "Q");
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cont = 0 ; 
    int ioption =  0; //option 
    int  oneTea = 30; int  twoTea = 25;
    do{
        cout << "請輸入哪種飲料";
        cout << "\n 1.奶茶\t2.紅茶 >>";
        cin >> ioption ;
        cout << "請輸入金額";
        cin >> cont;
        if(cont< oneTea || cont < twoTea){cout <<"\n輸入金額過少，請再重新輸入一次";continue;}
        if(ioption  == 1)
            cout<<"\n退還金額為 : " << cont  -oneTea  <<"\n";
        else if (ioption ==2) 
            cout << "\n退還金額為 : " << cont  -twoTea  <<"\n";
        else cout << "\n無此商品" ; 
        
    }while(ioption != 0 );
    return 0;
}

```
{% endtab %}
{% endtabs %}

2.利用do...while\(\) ，做出簡易介面。

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>
int main(void)
{
    int option = 0;
    printf("===============================\n");
    printf("=---99 multiplication table---=\n");
    printf("===============================\n");
    do
    {
         printf( "請輸入以下選項\n");
         printf("1. C/C++   2.C#\n"); 
         printf("3. JAVA    4.Python\n"); 
         printf("0. exit \n >>"); 
         printf(option);

    } while (option != 0);
    return 0;
}
```
{% endtab %}
{% endtabs %}

## Break、Continue、goto敘述

一般情況是會在違反進入迴圈的限制條件時候，才會結束迴圈運作，若問題是重複執行特定某些的敘述特性外，包刮例外特性必須加上break 或是continue 之敘述，可以方便撰寫程式。

## break 敘述功能使用方式 

break 敘述除了在 switch 的選擇結構外，可以使用在迴圈結構。當執行到break 時候，會跳出程式迴圈結構，並在迴圈外層第一行敘述去做執行。

#### 1.模擬密碼驗證\(假設密碼 : 123456\)，最多可以錯三次密碼。

{% tabs %}
{% tab title="C" %}
```c
#include<conio.h>
#include<stdio.h>
#include <string.h>

int main(void)
{
	char username[20] , password[20] ;
	int i ; 
	for(i = 1; i<=3;i++)
	{
		
		printf("pls enter username :");
		scanf("%s",&username);
		printf("pls enter  password :");
		scanf("%s",&password);
		if(strcmp(username,"admin")==0 && strcmp(password,"admin")==0)
		{
			printf("welcome my programing!! \n");
			break;
		}
		else
			printf(" %d warring!! \n",i);
	}	
    return 0; 
}
```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
using namespace std;

int main()
{
    int password=0;int round = 1;
    while (1)
    {
        cout << "請輸入密碼";
        cin >> password;
        if(password ==123456){
            cout<<"welcome \n";
            break;
        }
         
        if(round ==3) {
            cout<<"輸入密碼已超過三次，請通知管理員 \n";
            break;
        } 
        round++;
    }
    return 0;
}c
```
{% endtab %}
{% endtabs %}

## continue 敘述功能使用方式

continue 中文為\(繼續\)。是不執行迴圈內部某些敘述。

1. 在 for 迴圈結構內使用continue 執行到continue 會跳到該層的for迴圈內的第三部分，做迴圈變數增/減量。
2. 在while 迴圈內部使用 continue 執行到 continue 會跳到該層的while內，檢查迴圈是否成立。
3. 在do...while 迴圈內部使用continue 執行到continue 會跳到do 層的地方。

1. \(遊戲\)兩個人輪流從50顆彈珠中，拿走1~3顆，拿走最後一顆玻璃彈珠的人為輸家。

{% tabs %}
{% tab title="C" %}
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int who = 1;
    int take_num = 0;
    int box = 50;
    while (1)
    {
        printf("play %d start get box >>", who);
        scanf("%d", &take_num);
        if (take_num > 3 || take_num < 0)
        {
            printf("box not get 3 up and not get 0 \n");
            continue;
        }
        box -=take_num;
        if(box == 0){
            printf("lose => play %d \n" , who);
            break;
        }

        if (who >= 2)
            who = 1;
        else
            ++who;
        printf("box %d  \n" , box);
    }
    return 0;
}

```
{% endtab %}

{% tab title="C++" %}
```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

void main()
{
    int glass=50; //Glass ball
    int take_ball; 
    int who =1;

    printf("Each person can only take 1-3 glass balls...\n");

    while(1)
    {
        cin >> take_ball;
        if(take_ball!=1)
        {
            printf("Wrong input format, please try again...\n");
            fflush(stdin);
        }
        else
        {
            if(take_ball>=1 && take_ball<=3)
            {
                glass-=take_ball;
                cout<< glass <<" glass balls left";
                who++;
                if(who==3) who=1;
                if(glass<=0 || glass==1) {cout<<"loser : "<< who <<"\n";break;} 
            }
            else{printf("Wrong input format, please try again...\n");}
        }
    }
    
}
```
{% endtab %}
{% endtabs %}

2. 用文字 I LOVE C/C++ language ，呈現跑馬燈的效果直到任意案鍵就結束。

{% tabs %}
{% tab title="C++" %}
```c
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

int  main()
{
    string letter ="C++ Language ~!!";
    int i =61 , j ; 
    while (1)
    {
        if(kbhit() != 0){break;}
        for(j = 1 ;j <= i ;j++){
            cout<<" ";
        }
        cout<<letter;
        Sleep(250);          
        if(i >1 ) i--; else i=61;
        system("cls"); 
    }
    return 0;
}
```
{% endtab %}
{% endtabs %}

## GoTo

以C來作範例

```c
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[2],t;
    for(int i=0;i<2;i++)
        scanf("%d",&a[i]);
    t= a[0]>a[1];

    if(t==1)
        goto true;
    printf("a[0] is lower than a[1]");
    goto done;

    true:
        printf("a[0] is higher than a[1]");
    done:
        goto_ex02();
}

void goto_ex02(){
    printf("the begin\n");
	goto end;
	printf("hello world\n");

end:
	printf("the end\n");
}

```

