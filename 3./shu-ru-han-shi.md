# 輸出函式

在執行過程中，命令管理員\(Command\)遇到亂碼之類的時候，打上`chcp 65001`  轉 UTF-8 可以解決 中文亂碼問題。

![](../.gitbook/assets/image%20%2823%29.png)

## 練習

### 1. 寫一個長方形面積 

### C 

```text
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //長方形面積 (長*寬)
    float width = 2.9;
    float height = 2.9;

    printf("面積 >> %d", (width * height));
    system("PAUSE");
    return 0;
}

```

### C++

```text
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    //長方形面積 (長*寬)
    float width = 2.9;
    float height = 2.9;
    cout << width * height;
    system("PAUSE");
    return 0;
}

```

### 2. BMI 

 **BMI值計算公式:**    BMI = 體重\(公斤\) / 身高2\(公尺2\)

C

```text
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // BMI值計算公式:    BMI = 體重(公斤) / 身高2(公尺2)
    int weight = 2.9;
    float height = 2.9;
    int Bmi;
    height /=100;
	Bmi= weight/(height*height);
    printf("Bmi = %d", Bmi);
    system("PAUSE");
    return 0;
}


```

C++

```text
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    //長方形面積 (長*寬)
    int weight = 2.9;
    float height = 2.9;
    int Bmi;
    height /= 100;
    Bmi = weight / (height * height);
    cout << "BMI = " << Bmi;
    system("PAUSE");
    return 0;
}

```

