#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float total_miles;
    float cost_per_gallon;
    float miles_per_gallon;
    float parking_fees;
    float tolls;
    float daily_cost;

    // 依序讀入 5 項數據
    printf("Enter total miles driven per day: ");
    scanf("%f", &total_miles);

    printf("Enter cost per gallon of gasoline: ");
    scanf("%f", &cost_per_gallon);

    printf("Enter average miles per gallon: ");
    scanf("%f", &miles_per_gallon);

    printf("Enter parking fees per day: ");
    scanf("%f", &parking_fees);

    printf("Enter tolls per day: ");
    scanf("%f", &tolls);

    // 計算每日總開車費用
    daily_cost = (total_miles / miles_per_gallon) * cost_per_gallon + parking_fees + tolls;

    // 印出結果 (保留兩位小數)
    printf("\nYour daily driving cost is: $%.2f\n", daily_cost);

    return 0;
}