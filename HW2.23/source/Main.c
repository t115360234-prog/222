#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // 箇砞材计程籔程
    max = a;
    min = a;

    // 耞程
    if (b > max) max = b;
    if (c > max) max = c;

    // 耞程
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Largest is %d\n", max);
    printf("Smallest is %d\n", min);

    return 0;
}