#include <stdio.h>
#include <stdlib.h>
int n;
int arr[20][20];

int coins(int i, int j) {   // (i, j)부터 가로 3칸의 동전 수
    return arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    
    int max_coin = 0;
    for (int i1 = 0; i1 < n; i1++)
        for (int j1 = 0; j1 + 2 < n; j1++)
            for (int i2 = 0; i2 < n; i2++)
                for (int j2 = 0; j2 + 2 < n; j2++) {
                    // 같은 행에서 시작 열 차이가 3 미만이면 겹침
                    if (i1 == i2 && abs(j1 - j2) < 3) continue;
                    int sum = coins(i1, j1) + coins(i2, j2);
                    if (sum > max_coin)
                        max_coin = sum;
                }

    printf("%d\n", max_coin);
    
    return 0;
}
