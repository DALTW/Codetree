#include <stdio.h>
#define MAX_N 100
#define OFFSET 1000
int n;
int distances[MAX_N];
char directions[MAX_N];
int checked[2001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &distances[i], &directions[i]);
    }

    int cur = OFFSET;
    for (int i = 0; i < n; i++) {
        int x = distances[i];
        if (directions[i] == 'R') {
            for (int j = cur; j < cur + x; j++)
                checked[j]++;
            cur += x;
        } else {
            for (int j = cur - x; j < cur; j++)
                checked[j]++;
            cur -= x;
        }
    }

    int answer = 0;
    for (int i = 0; i <= 2000; i++)
        if (checked[i] >= 2)
            answer++;

    printf("%d\n", answer);
    return 0;
}
