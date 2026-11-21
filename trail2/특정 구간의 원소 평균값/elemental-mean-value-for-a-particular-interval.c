#include <stdio.h>
int n;
int arr[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int l = 0; l < n; l++)
        for (int r = l; r < n; r++) {
            int sum = 0, len = r - l + 1;
            for (int i = l; i <= r; i++)
                sum += arr[i];

            // 평균 = sum / len 이 어떤 원소 x와 같다 <=> x * len == sum
            for (int i = l; i <= r; i++)
                if (arr[i] * len == sum) {
                    cnt++;
                    break;
                }
        }

    printf("%d\n", cnt);
    return 0;
}
