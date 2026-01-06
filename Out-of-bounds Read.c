#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    printf("請輸入索引 (整數)：");
    scanf("%d", &index);

    // 加入邊界檢查，避免越界讀取
    if (index >= 0 && index < 5) {
        printf("arr[%d] = %d\n", index, arr[index]);
    } else {
        printf("錯誤：索引超出範圍！（有效範圍：0 ~ 4）\n");
    }

    return 0;
}