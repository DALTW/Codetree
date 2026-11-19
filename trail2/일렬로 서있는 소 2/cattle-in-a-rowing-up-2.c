#include <stdio.h>
int n;
int arr[100];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (arr[i] <= arr[j] && arr[j] <= arr[k])
                    cnt++;

    printf("%d\n", cnt);
    return 0;
}
