#include <stdio.h>
#include <stdlib.h>
int arr[100];
int main() {
    int n, s;
    int i;
    
    scanf("%d %d", &n, &s);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int total = 0;
    for (i = 0; i < n; i++)
        total += arr[i];

    int min_diff = -1;
    for (i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            int t = total - arr[i] - arr[j];   // i번째와 j번째를 뺀 합
            int diff = abs(t - s);
            if (min_diff == -1 || diff < min_diff)
                min_diff = diff;
        }

    printf("%d\n", min_diff);
    
    return 0;
}
