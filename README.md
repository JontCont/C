# C 語言
Refer to the C/C++ language topic.

#使用方式
使用[MinGW](http://www.mingw.org/)下載點，
若要在Windows下執行GCC，安裝完成後需要設定windows環境變數，
設定方法```由控制台→系統→進階系統設定→進階(Label)→環境變數```，
於下方系統變數裡找到 path 這個環境變數，再按下面的編輯，
結尾部分加上：
```;C:\MinGW\bin```

>記住分號不可省略，若找不到PATH這個變數，可自行新增：

變數名稱 : 
>PATH，變數值 : 

```%SystemRoot%\system32;%SystemRoot%;C:\MinGW\bin```
 重開機使環境變數生效，可以在 cmd 輸入 gcc -v，
 如果出現 gcc 的相關資訊表示安裝成功！
 若單純打gcc(g++)只會顯示 
 gcc(g++):fatal error :no input files的訊息!!
 
 ##編譯方式
將此檔案儲存為.cpp，此檔案稱為源文件(Source File) ，
由後綴"cpp"告訴系統這個文件是一個C++程式，常見的包括: .cc、.cxx、.cpp、.cp及.c

此程式中唯一做的事情就是傳回0整數(integer)，多數系統中，Main Function的返回值0表示成功，而非0的值則由系統定義，通常用來指出錯誤類型。
在[CMD指令](https://edisonx.pixnet.net/blog/post/57090736-%5Bcmd%5D-%E7%9B%AE%E9%8C%84%E8%88%87%E6%AA%94%E6%A1%88%E7%AE%A1%E7%90%86%E5%B8%B8%E7%94%A8%E6%8C%87%E4%BB%A4)中，
利用CD指令(Change Directory)切換至存有此source file的資料

其中gcc與g++來編譯的差別，即gcc是C的compiler，
而g++為C++的compiler，雖然乍看之下不管使用gcc或是g++來編譯，
系統都會根據source file的後綴(backends)究竟是c或cpp來決定，但要注意：
1. 對於 *.c和*.cpp文件，gcc分別當做c和cpp文件編譯（c和cpp的語法強度是不一樣的）

2. 對於 *.c和*.cpp文件，g++則統一當做cpp文件編譯

3. 使用g++編譯文件時，g++會自動link標準模板庫STL(Standard Template Library)，
而gcc不會自動link STL

 至此步驟，會發現source file所在的資料夾下產生a.exe(在UNIX系統中則是產生a.out)的可執行檔(Execution file)
 ，若我們改以下列指令來進行compile：
 
 因為-o參數代表指定生成的執行檔名，我們指定compile了名為prog1.cpp的source file，
 並指定將其命名為prog1，詳情請參考[GCC指令](https://jyhshin.pixnet.net/blog/post/26588012-gcc-%E5%8F%83%E6%95%B8-%E5%82%99%E8%A8%BB)
 例如　'''gcc 檔名.c -o 執行檔名'''
