#include <stdio.h>
#define BMI(weight,height) weight/(height*height)  // 定義 BMI 公式成巨集 
#define THIN(BMI) BMI<20                           // 定義 BMI 值的判斷式 
#define IDEAL(BMI) BMI>=19&&BMI<26
#define DANGEROUS(BMI) BMI>=26 && BMI<30

int main(void)
{
  float kg,cm;            // kg 為體重, cm 為身高
  float bmi;

  do
  {
    printf("===計算 BMI===\n");
    printf("請輸入體重 (kg):");      scanf("%f",&kg);
    printf("請輸入身高 (cm):");     scanf("%f",&cm);
    
    if ( kg<20)    // 排除輸入錯誤的體重值 
      printf("體重輸入錯誤, 請重新輸入\n");
    if ( cm<100)   // 排除輸入錯誤的身高值 
      printf("身高輸入錯誤, 請重新輸入\n");
  } while( kg<20 || cm<100); // 控制重新輸入的迴圈  
                            
  cm=cm/100;                 // 將公分轉換成公尺 
  bmi=BMI(kg,cm);            // 使用計算 BMI 值的巨集 
  printf("您的身體質量指數 BMI 是 %5.2f\n",bmi);

  if(THIN(bmi))               // 判斷 BMI 值 
    printf("體重不足, 請努力吃胖點\n");
  else if(IDEAL(bmi))
    printf("體格很標準!!\n");
  else if(DANGEROUS(bmi))
    printf("有點胖, 該減肥了!!\n");
  else
    printf("過胖了!!過胖了!!請小心身體!!\n");

  return 0;
}
