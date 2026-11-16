#include <stdio.h>
#define MAX_T 2000000

int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {
    int n, m;
    int t;
    char d;
    int i;
    
    scanf("%d %d", &n, &m);
    
    int time_a = 0;
    for(i = 0; i < n; i++) {
        scanf("%d %c", &t, &d);
        int step = (d == 'R') ? 1 : -1;
        while (t--) {
            pos_a[time_a + 1] = pos_a[time_a] + step;
            time_a++;
        }
    }
    
    int time_b = 0;
    for(i = 0; i < m; i++) {
        scanf("%d %c", &t, &d);
        int step = (d == 'R') ? 1 : -1;
        while (t--) {
            pos_b[time_b + 1] = pos_b[time_b] + step;
            time_b++;
        }
    }
    
    // 먼저 멈춘 로봇은 마지막 위치에 그대로 머무름
    int end = (time_a > time_b) ? time_a : time_b;
    for (i = time_a + 1; i <= end; i++) pos_a[i] = pos_a[time_a];
    for (i = time_b + 1; i <= end; i++) pos_b[i] = pos_b[time_b];

    int answer = 0;
    for (i = 1; i <= end; i++)
        if (pos_a[i] == pos_b[i] && pos_a[i - 1] != pos_b[i - 1])
            answer++;

    printf("%d\n", answer);
    
    return 0;
}
