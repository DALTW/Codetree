#include <stdio.h>

int isMagic(int n) {
    int digitSum = n / 10 + n % 10;
    return n % 2 == 0 && digitSum % 5 == 0;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isMagic(n))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
