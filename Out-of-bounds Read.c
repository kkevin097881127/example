#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    printf("請輸入索引 (整數)：");
    scanf("%d", &index);

    // 缺乏邊界檢查，可能造成越界讀取
    printf("arr[%d] = %d\n", index, arr[index]);

    return 0;
}