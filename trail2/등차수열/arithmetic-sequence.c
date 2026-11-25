#include <stdio.h>
int n;
int arr[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max_cnt = 0;
    for (int k = 1; k <= 100; k++) {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (arr[j] - k == k - arr[i]) cnt++;
        if (cnt > max_cnt) max_cnt = cnt;
    }
    printf("%d\n", max_cnt);
    
    return 0;
}
