#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;
    int choice;

    printf("請輸入 1 來分配記憶體，或輸入其他數字跳過：");
    scanf("%d", &choice);

    if (choice == 1) {
        ptr = (int *)malloc(sizeof(int));
    }
    // 如果使用者輸入非 1，ptr 仍為 NULL

    // 直接解引用 ptr，使用者輸入非 1 時會造成 NULL Pointer Dereference
    *ptr = 123;
    printf("你輸入的數值是：%d\n", *ptr);

    // 釋放記憶體（僅當有分配時有效）
    free(ptr);

    return 0;
}