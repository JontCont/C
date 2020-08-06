#include <stdio.h>
#include <stdlib.h>
#include <time.h>

union                      // 表示三軸加速度值 
{                          // 的共同空間 
  float value[3];
  struct {
      float x;
      float y;
      float z;
  } axis;
} gSensor;

void randomValue(void)     // 產生隨機加速度值的函式,
{                          //     用來模擬物體的活動 
  static unsigned int seed=0;
  int i=0;
  if(seed==0)           // 若亂數種子為 0  
  {
    seed = time(NULL);  // 取得亂數種子 
    srand(seed);        // 設定亂數種子 
  }
  
  for(i=0;i<3;i++)     // 用迴圈產生 3 個亂數, 設定給陣列元素 
    gSensor.value[i] = (float) rand() / RAND_MAX * 19.6 - 9.8; 
}

void delay(void)    // 自訂的延遲函式 
{
  int i,j;
  for(i=0;i<10000;i++)
    for(j=0;j<10000;j++) ;
}

int main(void)
{     
  randomValue(); //產生隨機值, 模擬輸入 
  // 由結構體取得 XYZ 三軸加速度值   
  printf("第 1 次偵測...\n");
  printf("X軸加速度: %f\n", gSensor.axis.x);
  printf("Y軸加速度: %f\n", gSensor.axis.y);
  printf("Z軸加速度: %f\n\n", gSensor.axis.z);
  delay();
  printf("第 2 次偵測...\n");
  randomValue(); //產生隨機值, 模擬輸入 
  // 由結構體取得 XYZ 三軸加速度值   
  printf("X軸加速度: %f\n", gSensor.axis.x);
  printf("Y軸加速度: %f\n", gSensor.axis.y);
  printf("Z軸加速度: %f\n", gSensor.axis.z);
  return 0;
}
