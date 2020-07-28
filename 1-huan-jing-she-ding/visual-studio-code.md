# Visual Studio Code

### Visual Studio Code 優點：

1. 可擴充 Git  
2. 多樣性 - 具有不同外掛可以做使用  
3. 語言種類 \(可能遇到部分語言沒有外掛擴充\)  
4. 靈活度  
5. Debugger

## Extensions 

Visual Studio Code 最大特點就是可以有多項化的外掛可以去做安裝到 vs code。  
下方會有連結可以去點擊參閱

Extensions : [https://marketplace.visualstudio.com/](https://marketplace.visualstudio.com/)

我們主要安裝 C/C++ 外掛   
C/C++ : [https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

![](../.gitbook/assets/image%20%281%29.png)

安裝完之後就剩下處理Debugger的問題了。

## Debugger

首先，開啟VScode 開啟新的資料夾\(Folder\)

![](../.gitbook/assets/image%20%282%29.png)



在新增已經新增的資料夾上新增ex01.c ，再輸程式碼。

![](../.gitbook/assets/image%20%283%29.png)

範例如下。

```text
#include<stdio.h>

int main(int argc, char const *argv[])
{
    print("Hello world !!");
    return 0;
}
```

