#include <stdio.h>// Input/Output 
#include <stdlib.h>
void BmiPint(float);

int main() //主
{

    float height ;
    int width ;
    float BMI;

//----------------INPUT-------------------//
    printf("enter height and width : ");
    scanf("%f %d",&height,&width);
//---------------OUTPUT-----------------//
    height = height/100; // height /=100;
    height=height*height;// 平方 height *=height;
    BMI =width/height;
    //if(BMI <= 18) printf("Thin\n");
    
    BmiPint(BMI);

    printf("BMI = %.2f \n",BMI);
    system("PAUSE");
    return 0;
}//main()

void BmiPint(float bmi)
{
    if(bmi <= 18){printf("Thin\n");}
    else if(bmi < 24) printf("normal\n");
    else if(bmi < 27) printf("overweight\n");
    else if(bmi < 30) printf("Mild obesity\n");
    else if(bmi < 35) printf("Moderately obese\n");
    else printf("Severe obesity\n");
}


//void 不回傳 
