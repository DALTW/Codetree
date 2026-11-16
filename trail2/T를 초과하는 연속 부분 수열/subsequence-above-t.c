#include <stdio.h>
int arr[1000];
int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int cnt = 0, max_cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > t)
            cnt++;
        else
            cnt = 0;
        if (cnt > max_cnt)
            max_cnt = cnt;
    }
    printf("%d\n", max_cnt);
    
    return 0;
}
