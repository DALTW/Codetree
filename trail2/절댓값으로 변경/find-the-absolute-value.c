#include <stdio.h>
#define MAX_N 50
int arr[MAX_N];

void toAbs(int *a, int size) {
    for (int i = 0; i < size; i++)
        if (a[i] < 0)
            a[i] = -a[i];
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    toAbs(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
