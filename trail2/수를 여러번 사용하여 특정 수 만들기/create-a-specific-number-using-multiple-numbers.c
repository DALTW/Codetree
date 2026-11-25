#include <stdio.h>
int a, b, c;
int main() {
    scanf("%d %d %d", &a, &b, &c);
    int ans = 0;
    for (int i = 0; a * i <= c; i++) {          // A를 i번 더함
        for (int j = 0; a * i + b * j <= c; j++) { // B를 j번 더함
            int sum = a * i + b * j;
            if (sum > ans) ans = sum;
        }
    }
    printf("%d\n", ans);
    return 0;
}
