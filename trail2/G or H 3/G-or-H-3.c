#include <stdio.h>
#define MAX_X 10000
int n, k;
int arr[10001];
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int pos;
        char ch;
        scanf("%d %c", &pos, &ch);
        if (ch == 'G')
            arr[pos] = 1;
        else
            arr[pos] = 2;
    }
    
    // 사진의 시작 위치 s를 정하면 [s, s + K] 구간이 찍힘
    // s + K가 10000을 넘는 경우는 s = 10000 - K일 때 이미 모두 포함되므로 생략
    int last_start = MAX_X - k;
    if (last_start < 1) last_start = 1;

    int max_score = 0;
    for (int s = 1; s <= last_start; s++) {
        int score = 0;
        for (int x = s; x <= s + k && x <= MAX_X; x++)
            score += arr[x];
        if (score > max_score)
            max_score = score;
    }
    printf("%d\n", max_score);
    
    return 0;
}
