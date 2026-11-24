#include <stdio.h>
int num[100];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    
    int answer = -1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n && j - i <= k; j++)   // 거리 K 이내인 쌍만
            if (num[i] == num[j] && num[i] > answer)
                answer = num[i];

    printf("%d\n", answer);
    
    return 0;
}
