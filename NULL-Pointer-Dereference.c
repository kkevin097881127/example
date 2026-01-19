#include <stdio.h>

int main() {
    int *ptr = NULL;
    // 錯誤：空指標解引用，程式會崩潰
    printf("Value: %d\n", *ptr);
    return 0;
}