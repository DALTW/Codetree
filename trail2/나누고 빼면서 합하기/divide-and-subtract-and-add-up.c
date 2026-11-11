#include <stdio.h>
int arr[101];
int cnt;

int sumVisited(int m) {
    int sum = arr[m];
    while (m > 1) {
        if (m % 2 == 1)
            m -= 1;
        else
            m /= 2;
        sum += arr[m];
    }
    return sum;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    cnt = m;

    printf("%d\n", sumVisited(cnt));
    return 0;
}
