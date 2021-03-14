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

