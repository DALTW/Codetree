#include <stdio.h>
int arr[1000];
int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int cnt = 1, max_cnt = 1;
    for (i = 1; i < n; i++) {
        if ((arr[i] > 0) == (arr[i - 1] > 0))
            cnt++;
        else
            cnt = 1;
        if (cnt > max_cnt)
            max_cnt = cnt;
    }
    printf("%d\n", max_cnt);
    
    return 0;
}
