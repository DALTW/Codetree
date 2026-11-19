#include <stdio.h>
int n;
int a[1003];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    long long min_sum = -1;
    for (int s = 0; s < n; s++) {          // s번 방에서 시작한다고 가정
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int dist = (i - s + n) % n;    // 시계 반대방향으로만 가는 거리
            sum += (long long)a[i] * dist;
        }
        if (min_sum == -1 || sum < min_sum)
            min_sum = sum;
    }
    printf("%lld\n", min_sum);
    
    return 0;
}
