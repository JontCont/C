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
