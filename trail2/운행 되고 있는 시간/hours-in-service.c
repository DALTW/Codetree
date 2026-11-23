#include <stdio.h>
int n;
int l[101], r[101];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &l[i], &r[i]);
    }

    int max_time = 0;
    for (int fired = 0; fired < n; fired++) {   // fired번 개발자를 해고한다고 가정
        int working[1001] = {0};
        for (int i = 0; i < n; i++) {
            if (i == fired) continue;
            for (int t = l[i]; t < r[i]; t++)   // [A, B): B는 포함하지 않음
                working[t] = 1;
        }

        int cnt = 0;
        for (int t = 1; t <= 1000; t++)
            cnt += working[t];
        if (cnt > max_time)
            max_time = cnt;
    }
    printf("%d\n", max_time);
    return 0;
}
