#include <stdio.h>

int main() {
    // 印出表格標頭，使用 \t (Tab) 來對齊
    printf("number\tsquare\tcube\n");

    // 計算並印出 0 到 10 的數值
    printf("%d\t%d\t%d\n", 0, 0 * 0, 0 * 0 * 0);
    printf("%d\t%d\t%d\n", 1, 1 * 1, 1 * 1 * 1);
    printf("%d\t%d\t%d\n", 2, 2 * 2, 2 * 2 * 2);
    printf("%d\t%d\t%d\n", 3, 3 * 3, 3 * 3 * 3);
    printf("%d\t%d\t%d\n", 4, 4 * 4, 4 * 4 * 4);
    printf("%d\t%d\t%d\n", 5, 5 * 5, 5 * 5 * 5);
    printf("%d\t%d\t%d\n", 6, 6 * 6, 6 * 6 * 6);
    printf("%d\t%d\t%d\n", 7, 7 * 7, 7 * 7 * 7);
    printf("%d\t%d\t%d\n", 8, 8 * 8, 8 * 8 * 8);
    printf("%d\t%d\t%d\n", 9, 9 * 9, 9 * 9 * 9);
    printf("%d\t%d\t%d\n", 10, 10 * 10, 10 * 10 * 10);

    return 0;
}