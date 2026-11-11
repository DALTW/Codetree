#include <stdio.h>
int arr[101];
int queryA1[101];
int queryA2[101];

int rangeSum(int a1, int a2) {
    int sum = 0;
    for (int i = a1; i <= a2; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);

    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < m; i++) {
        scanf("%d %d", &queryA1[i], &queryA2[i]);
    }

    for (i = 0; i < m; i++)
        printf("%d\n", rangeSum(queryA1[i], queryA2[i]));
    return 0;
}
