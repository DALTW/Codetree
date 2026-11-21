#include <stdio.h>
int n, m;
int A[101], B[101];
int cnt_b[101];
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", &B[j]);
    }
    
    // B에 각 숫자가 몇 번 나오는지 세어 둠
    for (int j = 0; j < m; j++)
        cnt_b[B[j]]++;

    int answer = 0;
    for (int s = 0; s + m <= n; s++) {        // A[s..s+m-1] 구간
        int cnt_a[101] = {0};
        for (int i = s; i < s + m; i++)
            cnt_a[A[i]]++;

        // 모든 숫자의 개수가 같으면 B의 순서를 바꾼 수열
        int same = 1;
        for (int v = 1; v <= 100; v++)
            if (cnt_a[v] != cnt_b[v]) {
                same = 0;
                break;
            }
        if (same)
            answer++;
    }
    printf("%d\n", answer);
    
    return 0;
}
