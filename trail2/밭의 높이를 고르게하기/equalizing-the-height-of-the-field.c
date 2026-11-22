#include <stdio.h>
#include <stdlib.h>
int n, h, t;
int arr[100];
int main() {
    scanf("%d %d %d", &n, &h, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 정확히 T개짜리 구간만 맞추면 "T번 이상" 조건이 만족됨
    int min_cost = -1;
    for (int s = 0; s + t <= n; s++) {
        int cost = 0;
        for (int i = s; i < s + t; i++)
            cost += abs(arr[i] - h);
        if (min_cost == -1 || cost < min_cost)
            min_cost = cost;
    }
    printf("%d\n", min_cost);
    
    return 0;
}
