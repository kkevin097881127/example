#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    // 錯誤：嘗試讀取陣列範圍外的資料
    printf("Out-of-bounds value: %d\n", arr[5]);
    return 0;
}