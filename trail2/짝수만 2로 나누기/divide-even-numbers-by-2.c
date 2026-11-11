#include <stdio.h>
int n;
int arr[50];

void halveEvens(int *a, int size) {
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            a[i] /= 2;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    halveEvens(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
