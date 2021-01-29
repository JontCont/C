# 1-2 Visual Studio Code

## Visual Studio Code 優點：

#### 1. 可擴充 Git 2. 多樣性 - 具有不同外掛可以做使用 3. 語言種類 \(可能遇到部分語言沒有外掛擴充\) 4. 靈活度 5. Debugger

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

範例如下，在第四行中，點入中斷點再來按下 F5。

```c
#include<stdio.h>

int main(int argc, char const *argv[])
{
    print("Hello world !!");
    return 0;
}
```

會出現下圖部分，選擇有GDB部分後，會出現gcc.exe，選擇第一個。

![&#xFF11;&#xFF0E;&#x8A2D;&#x5B9A;&#xFF0D;&#xFF26;&#xFF15;&#x5F8C;&#x9078;&#x64C7;&#x7B2C;&#x4E00;&#x500B;&#x9078;&#x9805;](../.gitbook/assets/image%20%285%29.png)

![&#xFF12;&#xFF0E;&#x8A2D;&#x5B9A;&#xFF0D;&#x9078;&#x64C7;&#x7B2C;&#x4E00;&#x500B;&#x9078;&#x9805;](../.gitbook/assets/image%20%286%29.png)

之後會自動跑出 .vscode資料夾。要修改為＂launch.json＂。修改如下

```bash
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "gcc.exe - 建置及偵錯使用中的檔案",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}\\${fileBasenameNoExtension}.exe", //修改成${workspaceFolder}
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true, //修改true
            "MIMode": "gdb",
            "miDebuggerPath": "C:\\MinGW\\bin\\gdb.exe", //確認MinGW路徑
            "setupCommands": [
                {
                    "description": "啟用 gdb 的美化顯示",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: gcc.exe build active file"
        }
    ]
}
```

修改後，在按下Ｆ５就會跑出來了。

![](../.gitbook/assets/image%20%287%29.png)

如果跑出　＂tasks.json＂　設定，如下：

```bash
    {
    // See https://go.microsoft.com/fwlink/?LinkId=733558 
    // for the documentation about the tasks.json format
    "version": "2.0.0",
    "tasks": [
    {
        "type": "shell",
        "label": "gcc.exe build active file",
        "command": "C:\\MinGW\\bin\\gcc.exe",
        "args": [
            "-g",
            "${file}",
            "-o",
            "${workspaceFolder}\\a.exe"
        ],
        "options": {
            "cwd": "C:\\MinGW\\bin"
        },
        "problemMatcher": [
            "$gcc"
        ],
        "group": "build"
    }
]
```



