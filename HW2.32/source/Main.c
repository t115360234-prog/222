#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float weight, height, bmi;

    // 提示使用者輸入體重與身高
    printf("Enter your weight in kilograms (e.g., 65.5): ");
    scanf("%f", &weight);

    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%f", &height);

    // BMI 計算公式：體重(公斤) / 身高(公尺)的平方
    bmi = weight / (height * height);

    // 顯示計算出來的 BMI 數值
    printf("\nYour BMI is: %f\n\n", bmi);

    // 印出題目要求附上的 BMI 參考標準表
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");

    return 0;
}