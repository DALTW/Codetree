#include <stdio.h>
#include <string.h>
char binary[11];

int to_decimal(char *s) {
    int num = 0;
    for (int i = 0; s[i] != '\0'; i++)
        num = num * 2 + (s[i] - '0');
    return num;
}

int main() {
    scanf("%s", binary);

    int len = strlen(binary), max_val = -1;
    for (int i = 0; i < len; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';   // i번째 자리 바꾸기
        int val = to_decimal(binary);
        if (val > max_val)
            max_val = val;
        binary[i] = (binary[i] == '0') ? '1' : '0';   // 원래대로 되돌리기
    }
    printf("%d\n", max_val);
    return 0;
}
