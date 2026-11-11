#include <stdio.h>
int arr[100];

int findMax(int idx) {
    if (idx == 0)
        return arr[0];
    int restMax = findMax(idx - 1);
    return (arr[idx] > restMax) ? arr[idx] : restMax;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findMax(n - 1));
    return 0;
}
