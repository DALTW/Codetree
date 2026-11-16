#include <stdio.h>
#define MAX_T 1000000
int N, M;
char A_dir[1000];
int A_time[1000];
char B_dir[1000];
int B_time[1000];

int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main() {
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        scanf(" %c %d", &A_dir[i], &A_time[i]);
    }
    
    for (int i = 0; i < M; i++) {
        scanf(" %c %d", &B_dir[i], &B_time[i]);
    }
    
    // 1초마다 A의 위치 기록
    int time_a = 0;
    for (int i = 0; i < N; i++) {
        int step = (A_dir[i] == 'R') ? 1 : -1;
        for (int j = 0; j < A_time[i]; j++) {
            pos_a[time_a + 1] = pos_a[time_a] + step;
            time_a++;
        }
    }

    // 1초마다 B의 위치 기록
    int time_b = 0;
    for (int i = 0; i < M; i++) {
        int step = (B_dir[i] == 'R') ? 1 : -1;
        for (int j = 0; j < B_time[i]; j++) {
            pos_b[time_b + 1] = pos_b[time_b] + step;
            time_b++;
        }
    }

    int answer = -1;
    for (int t = 1; t <= time_a; t++) {
        if (pos_a[t] == pos_b[t]) {
            answer = t;
            break;
        }
    }
    printf("%d\n", answer);
    
    return 0;
}
