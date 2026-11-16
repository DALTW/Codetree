#include <stdio.h>
#define MAX_N 1000
int n;
int arr[MAX_N];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 1, max_cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1])
            cnt++;
        else
            cnt = 1;
        if (cnt > max_cnt)
            max_cnt = cnt;
    }
    printf("%d\n", max_cnt);
    return 0;
}
