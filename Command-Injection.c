#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];

    printf("請輸入要顯示內容的檔案名稱：");
    scanf("%99s", filename);

    // 潛在命令注入漏洞：使用者輸入直接拼接到系統指令
    char cmd[120];
    sprintf(cmd, "type %s", filename); // Windows 下用 type；Linux 下請改用 cat

    system(cmd); // 直接執行，使用者可注入惡意指令
    return 0;
}
