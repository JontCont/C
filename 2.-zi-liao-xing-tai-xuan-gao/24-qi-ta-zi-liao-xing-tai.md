# 其他資料型態

## 布林 bool

布林只有 true/false \(真/假\) 這兩種常數資料型態。 

## 練習

下方程式，測試 bool  0 / 1 是怎樣判別 true 與 false

```c
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    bool ToF;
    printf("Pls Numble= >");
    scanf("%d",&ToF);
    printf("%s\n",ToF ? "true" : "false");
    
    system("PAUSE");
    return 0;
}

```

