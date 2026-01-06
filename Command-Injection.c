#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_filename(const char *filename) {
    // 僅允許英數字、-、_、.，且不允許目錄分隔符
    for (int i = 0; filename[i] != '\0'; i++) {
        if (!isalnum((unsigned char)filename[i]) &&
            filename[i] != '-' &&
            filename[i] != '_' &&
            filename[i] != '.') {
            return 0;
        }
    }
    // 不允許目錄分隔符
    if (strchr(filename, '/') != NULL || strchr(filename, '\\') != NULL) {
        return 0;
    }
    return 1;
}

int main() {
    char filename[100];

    printf("請輸入要顯示內容的檔案名稱：");
    if (scanf("%99s", filename) != 1) {
        printf("輸入錯誤。\n");
        return 1;
    }

    if (!is_valid_filename(filename)) {
        printf("檔案名稱包含非法字元。\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("檔案無法開啟或不存在。\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
