#include <stdio.h>
int n;
int arr[20];

// 세 수를 더할 때 어느 자리에서도 carry가 생기지 않으면 1
int no_carry(int a, int b, int c) {
    while (a > 0 || b > 0 || c > 0) {
        if (a % 10 + b % 10 + c % 10 >= 10)
            return 0;
        a /= 10;
        b /= 10;
        c /= 10;
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int answer = -1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (no_carry(arr[i], arr[j], arr[k])) {
                    int sum = arr[i] + arr[j] + arr[k];
                    if (sum > answer)
                        answer = sum;
                }

    printf("%d\n", answer);
    
    return 0;
}
