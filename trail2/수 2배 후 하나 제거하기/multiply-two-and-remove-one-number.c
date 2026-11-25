#include <stdio.h>
#include <stdlib.h>
int n;
int arr[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int min_score = 1000000;
    for (int i = 0; i < n; i++) {          // 2배로 만들 원소
        arr[i] *= 2;
        for (int j = 0; j < n; j++) {      // 제거할 원소
            int tmp[100], cnt = 0;
            for (int k = 0; k < n; k++)
                if (k != j) tmp[cnt++] = arr[k];
            int score = 0;
            for (int k = 0; k + 1 < cnt; k++)
                score += abs(tmp[k + 1] - tmp[k]);
            if (score < min_score) min_score = score;
        }
        arr[i] /= 2;                       // 원래 값으로 되돌리기
    }
    printf("%d\n", min_score);
    return 0;
}
