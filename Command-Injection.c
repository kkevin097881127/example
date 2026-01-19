#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    printf("Enter filename to display: ");
    scanf("%99s", filename);

    // 不安全：直接將使用者輸入組成系統指令
    char command[120];
    snprintf(command, sizeof(command), "cat %s", filename);
    system(command);

    return 0;
}