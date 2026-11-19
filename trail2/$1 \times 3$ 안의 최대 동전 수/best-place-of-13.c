#include <stdio.h>
int n;
int arr[20][20];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int max_coin = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j + 2 < n; j++) {   // 가로 3칸이 격자 안에 들어오는 시작점만
            int cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            if (cnt > max_coin)
                max_coin = cnt;
        }

    printf("%d\n", max_coin);
    return 0;
}
