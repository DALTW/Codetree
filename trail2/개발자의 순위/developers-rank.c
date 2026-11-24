#include <stdio.h>
#define MAX_K 10
#define MAX_N 20
int k, n;
int arr[MAX_K][MAX_N];
int pos[MAX_K][MAX_N + 1];   // pos[i][x]: i번째 경기에서 x번 개발자의 순위
int main() {
    scanf("%d %d", &k, &n);
    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    
    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            pos[i][arr[i][j]] = j;

    int cnt = 0;
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++) {
            if (a == b) continue;
            int always = 1;
            for (int i = 0; i < k; i++)
                if (pos[i][a] > pos[i][b]) {   // 한 번이라도 a가 b보다 낮으면 실패
                    always = 0;
                    break;
                }
            if (always)
                cnt++;
        }
    printf("%d\n", cnt);
    
    return 0;
}
