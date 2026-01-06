#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;
    int choice;

    printf("請輸入 1 來分配記憶體，或輸入其他數字跳過：");
    scanf("%d", &choice);

    if (choice == 1) {
        ptr = (int *)malloc(sizeof(int));
        if (ptr == NULL) {
            printf("記憶體分配失敗！\n");
            return 1;
        }
        *ptr = 123;
        printf("你輸入的數值是：%d\n", *ptr);
        free(ptr);
    } else {
        printf("未分配記憶體，指標不可使用。\n");
    }

    return 0;
}