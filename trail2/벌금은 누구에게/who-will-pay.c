#include <stdio.h>
int n, m, k;
int penalized_person[10000];
int cnt[101];
int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++) {
        scanf("%d", &penalized_person[i]);
    }
    
    int answer = -1;
    for (int i = 0; i < m; i++) {
        int p = penalized_person[i];
        cnt[p]++;
        if (cnt[p] >= k) {
            answer = p;
            break;
        }
    }
    printf("%d\n", answer);
    
    return 0;
}
