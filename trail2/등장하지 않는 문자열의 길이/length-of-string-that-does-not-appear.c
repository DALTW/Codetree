#include <stdio.h>
#include <string.h>
int n;
char str[105];
int main() {
    scanf("%d", &n);
    scanf("%s", str);
    
    for (int len = 1; len <= n; len++) {
        int ok = 1;   // 길이 len인 부분문자열이 모두 다른지
        for (int i = 0; i + len <= n && ok; i++) {
            for (int j = i + 1; j + len <= n; j++) {
                if (strncmp(str + i, str + j, len) == 0) {
                    ok = 0;   // 같은 부분문자열이 두 번 등장
                    break;
                }
            }
        }
        if (ok) {
            printf("%d\n", len);
            break;
        }
    }
    
    return 0;
}
